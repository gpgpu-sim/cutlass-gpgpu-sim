  typedef cutlass::gemm::SgemmTraits<cutlass::MatrixLayout::kColumnMajor,
    cutlass::MatrixLayout::kRowMajor, cutlass::Shape<8, 128, 128> >
    SgemmTraits1;
  run_gemm<SgemmTraits1>(1024, 512, 8);


  typedef cutlass::gemm::SgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor, cutlass::Shape<8, 128, 128> >
      SgemmTraits2;
  run_gemm<SgemmTraits2>(128, 81, 1);


  typedef cutlass::gemm::SgemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                     cutlass::MatrixLayout::kRowMajor, cutlass::Shape<8, 128, 128> >
      SgemmTraits3;
  run_gemm<SgemmTraits3>(128, 112, 8);
