// __ZN13codexmate_lib4core5voice7runtime4tray27update_tray_recording_state @ 0x10068a5a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(
        __int64 a1,
        int a2,
        __m128 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  int v9; // esi
  __int64 v10; // rax
  int v11; // ecx
  __m128 v12; // xmm1
  float v13; // xmm0_4
  int v14; // ecx
  int v15; // ebx
  int v16; // r9d
  __int64 v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  int v20; // ecx
  __int64 v21; // r11
  __int64 v22; // r12
  __int64 v23; // r15
  int v24; // r14d
  int v25; // r14d
  int v26; // r8d
  __int64 v27; // rdi
  _BYTE __dst[208]; // [rsp+0h] [rbp-280h] BYREF
  _QWORD __src[26]; // [rsp+D0h] [rbp-1B0h] BYREF
  _QWORD v30[3]; // [rsp+1A0h] [rbp-E0h] BYREF
  int v31; // [rsp+1B8h] [rbp-C8h]
  int v32; // [rsp+1BCh] [rbp-C4h]
  _QWORD v33[6]; // [rsp+1C0h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+1F0h] [rbp-90h]
  __int64 v35; // [rsp+1F8h] [rbp-88h]
  _QWORD v36[10]; // [rsp+200h] [rbp-80h] BYREF
  int v37; // [rsp+254h] [rbp-2Ch]

  result = tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::h5bd8a69eb22dc33d( /*0x10068a5d9*/
             __src,
             *(_QWORD *)(a1 + 136) + 4552LL,
             a1,
             "mainstopLeftDownmovecell",
             4);
  if ( LODWORD(__src[0]) != 3 ) /*0x10068a5e5*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10068a608*/
    __src[7] = &unk_101603270; /*0x10068a614*/
    __src[8] = 4612; /*0x10068a61b*/
    __src[9] = 0; /*0x10068a626*/
    __src[4] = 0x8000000000000001LL; /*0x10068a635*/
    __src[0] = 1; /*0x10068a63c*/
    __src[1] = 0x20000000; /*0x10068a647*/
    LODWORD(__src[2]) = 0; /*0x10068a652*/
    LODWORD(__src[3]) = 0; /*0x10068a65c*/
    image::io::image_reader_type::ImageReader$LT$R$GT$::with_guessed_format::h5e53adb78595ff77(v36, __src); /*0x10068a671*/
    if ( LODWORD(v36[0]) == 2 ) /*0x10068a67a*/
    {
      if ( (v36[1] & 3) == 1 ) /*0x10068a688*/
      {
        v5 = v36[1] - 1LL; /*0x10068a68e*/
        v6 = *(_QWORD *)(v36[1] - 1LL); /*0x10068a692*/
        v7 = *(_QWORD *)(v36[1] + 7LL); /*0x10068a696*/
        if ( *(_QWORD *)v7 ) /*0x10068a69a*/
          (*(void (__fastcall **)(__int64))v7)(v6); /*0x10068a6a6*/
        v8 = *(_QWORD *)(v7 + 8); /*0x10068a6a8*/
        if ( v8 ) /*0x10068a6b0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10068a6ba*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10068a6cc*/
      }
    }
    else
    {
      qmemcpy(__src, v36, 0x50u); /*0x10068a6e9*/
      image::io::image_reader_type::ImageReader$LT$R$GT$::decode::h5f11bf0ee5235bdf(v36, __src); /*0x10068a6f3*/
      if ( LOBYTE(v36[0]) == 10 ) /*0x10068a6fc*/
      {
        v33[5] = v36[6]; /*0x10068a706*/
        v33[4] = v36[5]; /*0x10068a711*/
        v33[3] = v36[4]; /*0x10068a71c*/
        v33[2] = v36[3]; /*0x10068a727*/
        v33[1] = v36[2]; /*0x10068a736*/
        v33[0] = v36[1]; /*0x10068a73d*/
        image::images::dynimage::DynamicImage::to_rgba8::h779723173d94da77(v36, v33); /*0x10068a74f*/
        v9 = v36[3]; /*0x10068a754*/
        v10 = HIDWORD(v36[3]); /*0x10068a757*/
        if ( (_BYTE)a2 ) /*0x10068a75c*/
        {
          if ( HIDWORD(v36[3]) ) /*0x10068a764*/
          {
            v11 = v36[3]; /*0x10068a76c*/
            if ( HIDWORD(v36[3]) < LODWORD(v36[3]) ) /*0x10068a76e*/
              v11 = HIDWORD(v36[3]); /*0x10068a76e*/
            a3.f32[0] = (float)v11 * 0.2; /*0x10068a776*/
            v12 = _mm_or_ps(_mm_and_ps((__m128)xmmword_101601D50, a3), (__m128)xmmword_101601D60); /*0x10068a788*/
            v12.f32[0] = v12.f32[0] + a3.f32[0]; /*0x10068a78f*/
            v13 = _mm_round_ss((__m128)0LL, v12, 11).f32[0]; /*0x10068a796*/
            v14 = 0x7FFFFFFF; /*0x10068a7a7*/
            if ( v13 <= 2147483500.0 ) /*0x10068a7ac*/
              v14 = (int)v13; /*0x10068a7ac*/
            if ( LODWORD(v36[3]) ) /*0x10068a7b9*/
            {
              v37 = a2; /*0x10068a7bf*/
              v15 = v14 - HIDWORD(v36[3]) + 1; /*0x10068a7c6*/
              v16 = v14 * v14; /*0x10068a7cb*/
              v17 = v36[1]; /*0x10068a7cf*/
              v18 = v36[2]; /*0x10068a7d3*/
              v19 = 4LL * LODWORD(v36[3]); /*0x10068a7d7*/
              v34 = LODWORD(v36[3]); /*0x10068a7df*/
              v20 = v14 - LODWORD(v36[3]) + 1; /*0x10068a7e8*/
              v21 = 0; /*0x10068a7ea*/
              v35 = v36[1]; /*0x10068a7ed*/
              v22 = 0; /*0x10068a7f4*/
              v23 = 0; /*0x10068a7f7*/
              do /*0x10068a80c*/
              {
                v24 = v23++; /*0x10068a80e*/
                v25 = (v15 + v24) * (v15 + v24); /*0x10068a817*/
                v26 = v20; /*0x10068a81b*/
                v27 = 0; /*0x10068a81e*/
                do /*0x10068a83a*/
                {
                  if ( v25 + v26 * v26 <= v16 ) /*0x10068a849*/
                  {
                    if ( v21 + v27 + 3 >= v18 ) /*0x10068a853*/
                      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d( /*0x10068a950*/
                        v27 - v22,
                        v27 - v22 + 4,
                        v18,
                        &off_101967B60);
                    *(_DWORD *)(v17 + v27) = -14276900; /*0x10068a859*/
                  }
                  v27 += 4; /*0x10068a830*/
                  ++v26; /*0x10068a834*/
                }
                while ( v19 != v27 ); /*0x10068a83a*/
                v22 -= v19; /*0x10068a800*/
                v17 += v19; /*0x10068a803*/
                v21 += v19; /*0x10068a806*/
              }
              while ( v23 != v10 ); /*0x10068a80c*/
              LOBYTE(a2) = v37; /*0x10068a876*/
              v9 = v34; /*0x10068a883*/
            }
            else
            {
              v9 = 0; /*0x10068a88c*/
            }
          }
          else
          {
            LODWORD(v10) = 0; /*0x10068a872*/
          }
        }
        v30[2] = v36[2]; /*0x10068a892*/
        v30[1] = v36[1]; /*0x10068a8a1*/
        v30[0] = v36[0]; /*0x10068a8a8*/
        v31 = v9; /*0x10068a8af*/
        v32 = v10; /*0x10068a8b5*/
        tauri::tray::TrayIcon$LT$R$GT$::set_icon::h4816009d9922eaee(__src, __dst, v30); /*0x10068a8d0*/
        if ( __src[0] != 0x8000000000000025LL ) /*0x10068a8dc*/
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x10068a8e5*/
        tauri::tray::TrayIcon$LT$R$GT$::set_icon_as_template::ha5caa3f08348daec(__src, __dst, (unsigned __int8)a2 ^ 1u); /*0x10068a8fe*/
        if ( __src[0] != 0x8000000000000025LL ) /*0x10068a90a*/
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x10068a913*/
        core::ptr::drop_in_place$LT$image..images..dynimage..DynamicImage$GT$::hccb1fbfddb10c05a(v33); /*0x10068a91f*/
      }
      else
      {
        core::ptr::drop_in_place$LT$image..error..ImageError$GT$::h4c2882e70174c50a(v36); /*0x10068a868*/
      }
    }
    return core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h2d970e0951ae6585(__dst); /*0x10068a92b*/
  }
  return result; /*0x10068a930*/
}