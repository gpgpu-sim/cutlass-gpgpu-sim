
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits1;
  run_gemm<WmmaGemmTraits1>(16, 16, 16);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits2;
  run_gemm<WmmaGemmTraits2>(16, 16, 32);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits3;
  run_gemm<WmmaGemmTraits3>(16, 16, 16);


  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits4;
  run_gemm<WmmaGemmTraits4>(16, 16, 32);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits5;
  run_gemm<WmmaGemmTraits5>(16, 16, 16);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits6;
  run_gemm<WmmaGemmTraits6>(16, 16, 32);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits7;
  run_gemm<WmmaGemmTraits7>(16, 16, 16);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits8;
  run_gemm<WmmaGemmTraits8>(16, 16, 32);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits9;
  run_gemm<WmmaGemmTraits9>(32, 32, 32);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits10;
  run_gemm<WmmaGemmTraits10>(32, 32, 32);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits11;
  run_gemm<WmmaGemmTraits11>(32, 32, 32);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits12;
  run_gemm<WmmaGemmTraits12>(32, 32, 32);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits13;
  run_gemm<WmmaGemmTraits13>(128, 128, 128);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits14;
  run_gemm<WmmaGemmTraits14>(128, 128, 128);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits15;
  run_gemm<WmmaGemmTraits15>(128, 128, 128);
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits16;
  run_gemm<WmmaGemmTraits16>(128, 128, 128);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits17;
  run_gemm<WmmaGemmTraits17>(256, 256, 128);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits18;
  run_gemm<WmmaGemmTraits18>(256, 256, 128);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits19;
  run_gemm<WmmaGemmTraits19>(256, 256, 128);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits20;
  run_gemm<WmmaGemmTraits20>(256, 256, 128);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits21;
  run_gemm<WmmaGemmTraits21>(256, 256, 256);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits22;
  run_gemm<WmmaGemmTraits22>(256, 256, 256);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits23;
  run_gemm<WmmaGemmTraits23>(256, 256, 256);

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits24;
  run_gemm<WmmaGemmTraits24>(256, 256, 256);
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits25;
//  run_gemm<WmmaGemmTraits25>(512, 512, 512);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits26;
//  run_gemm<WmmaGemmTraits26>(512, 512, 512);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits27;
//  run_gemm<WmmaGemmTraits27>(512, 512, 512);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits28;
//  run_gemm<WmmaGemmTraits28>(512, 512, 512);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits29;
//  run_gemm<WmmaGemmTraits29>(768, 768, 768);
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits30;
//  run_gemm<WmmaGemmTraits30>(768, 768, 768);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits31;
//  run_gemm<WmmaGemmTraits31>(768, 768, 768);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits32;
//  run_gemm<WmmaGemmTraits32>(768, 768, 768);
//
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits33;
//  run_gemm<WmmaGemmTraits33>(1024, 1024, 1024);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits34;
//  run_gemm<WmmaGemmTraits34>(1024, 1024, 1024);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits35;
//  run_gemm<WmmaGemmTraits35>(1024, 1024, 1024);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits36;
//  run_gemm<WmmaGemmTraits36>(1024, 1024, 1024);
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits37;
//  run_gemm<WmmaGemmTraits37>(2048, 2048, 2048);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits38;
//  run_gemm<WmmaGemmTraits38>(2048, 2048, 2048);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits39;
//  run_gemm<WmmaGemmTraits39>(2048, 2048, 2048);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits40;
//  run_gemm<WmmaGemmTraits40>(2048, 2048, 2048);
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits41;
//  run_gemm<WmmaGemmTraits41>(4096, 4096, 4096);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits42;
//  run_gemm<WmmaGemmTraits42>(4096, 4096, 4096);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits43;
//  run_gemm<WmmaGemmTraits43>(4096, 4096, 4096);
//
//  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
//                                        cutlass::MatrixLayout::kColumnMajor,
//                                        cutlass::Shape<64, 128, 128> >
//      WmmaGemmTraits44;
//  run_gemm<WmmaGemmTraits44>(4096, 4096, 4096);
