# cutlass-gpgpu-sim

## Dependencies 

This package is meant to be run on a modern Linux distro and requires CUDA 9.0 Toolkit or more to be installed. The package can be run standalone or with GPGPUSim 4.0.  Since the code has been using the CUTLASS 1.1 so it doesn't support the latest Turing WMMA features.

## Purpose

The purpose of the repository is to provide a centralized place for creating the cuda kernel using the CUTLASS library and executing it on GPGPU-Sim.

## Directory Structure

cutlass  -\> CUTLASS 1.1 Library

util     -\> Helper function derived from the CUTLASS test examples

gemm-test-\> Contains the gemm-tests and supporing files

## How should I run on GPGPU-Sim?

The following things need to be setup:

	1. CUDA toolkit installed (currently GPGPU-Sim runs reliably using CUDA 9.1 )

	2. You must have the GPGPU-Sim 4.0 (GPGPU-Sim GitHub dev branch)

	3. nvcc is in the path and CUDA install path is set correctly

	4. You have sourced the setup\_environment file inside the GPGPU-Sim 4.0 dev branch and build the simulator

	5. You have copied the config files from gpgpu-sim\_distribution/configs/tested-cfgs/SM7\_TITANV to the cutlass-gpgpu-sim/


If all of the above step has been done properly then running the kernels is simple.

make (Verify that executable has been linked to GPGPU-Sim by using ldd command.)

./cutlass-test (Running the tests)

If you see Result Verified then everything is good to go.
