//added by me
#include <cutlass/wmma_matrix.h>
#include <cutlass/gemm/gemm.h>
#include <cutlass/gemm/wmma_gemm_traits.h>
#include "cutlass/gemm/sgemm_traits.h"
#include "cutlass/gemm/dgemm_traits.h"
#include <gemm-test/gemm_testbed.h>
#include <gemm-test/gemm.h>

int main(int argc, char* argv[]) {

	#include <gemm-test/wmma_tests.h>
	#include <gemm-test/sgemm_tests.h>
	#include <gemm-test/dgemm_tests.h>
}


