  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 32, 64> > DGemmTraits1;
  run_gemm<DGemmTraits1>(64, 32, 8);



  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 32, 64> > DGemmTraits2;
  run_gemm<DGemmTraits2>(256, 128, 64);



  typedef cutlass::gemm::DgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor,
                                     cutlass::Shape<8, 64, 64> > DGemmTraits3;
  run_gemm<DGemmTraits3>(64, 64, 8);

