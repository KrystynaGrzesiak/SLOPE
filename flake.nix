{
  description = "A basic flake with a shell";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.systems.url = "github:nix-systems/default";
  inputs.flake-utils = {
    url = "github:numtide/flake-utils";
    inputs.systems.follows = "systems";
  };

  outputs =
    { nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShells.default = pkgs.mkShell {
          shellHook = ''
            mkdir -p "$(pwd)/_libs"
            export R_LIBS_USER="$(pwd)/_libs"
          '';
          packages = [
            pkgs.bashInteractive
            (pkgs.rWrapper.override {
              packages = with pkgs.rPackages; [
                Matrix
                Rcpp
                RcppArmadillo
                bench
                caret
                covr
                devtools
                doParallel
                dplyr
                foreach
                ggplot2
                glmnet
                knitr
                knockoff
                languageserver
                patchwork
                rmarkdown
                scales
                spelling
                stringr
                testthat
                tidyr
                tidyverse
                usethis
                vdiffr
              ];
            })
          ];
        };
      }
    );
}
