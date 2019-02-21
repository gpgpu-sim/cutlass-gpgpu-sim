  #ifdef DGEMM_1
  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 32, 64> > DGemmTraits1;
  run_gemm<DGemmTraits1>(64, 32, 8);
  #endif

  #ifdef DGEMM_2
  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 32, 64> > DGemmTraits2;
  run_gemm<DGemmTraits2>(256, 128, 64);
  #endif

  #ifdef DGEMM_3
  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 64, 64> > DGemmTraits3;
  run_gemm<DGemmTraits3>(64, 64, 8);
  #endif
