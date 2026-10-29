// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: tauri::path::resolve_path::he46d82f9ed07853d; addr: 0x1003d5920; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
unsigned __int64 *__fastcall tauri::path::resolve_path::he46d82f9ed07853d(
        unsigned __int64 *a1,
        __int64 a2,
        __int16 a3,
        __int64 *a4)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // r14
  __int64 v17; // r15
  char *v18; // rax
  _QWORD v20[8]; // [rsp+0h] [rbp-140h] BYREF
  char *v21; // [rsp+40h] [rbp-100h]
  __int64 v22; // [rsp+48h] [rbp-F8h]
  unsigned __int64 v23; // [rsp+50h] [rbp-F0h]
  unsigned __int64 *v24; // [rsp+58h] [rbp-E8h]
  __int64 v25; // [rsp+60h] [rbp-E0h]
  char *v26; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+78h] [rbp-C8h]
  __int64 v29; // [rsp+80h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+88h] [rbp-B8h] BYREF
  char *v31; // [rsp+90h] [rbp-B0h]
  __int64 v32; // [rsp+98h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+A0h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-98h]
  unsigned __int64 v35; // [rsp+B0h] [rbp-90h]
  __int64 v36; // [rsp+B8h] [rbp-88h]
  __int64 v37; // [rsp+C0h] [rbp-80h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-78h] BYREF
  char *v39; // [rsp+D0h] [rbp-70h]
  __int64 v40; // [rsp+D8h] [rbp-68h]
  unsigned __int64 v41; // [rsp+E0h] [rbp-60h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-58h]
  unsigned __int64 v43; // [rsp+F0h] [rbp-50h]
  char *v44; // [rsp+100h] [rbp-40h] BYREF
  __int64 v45; // [rsp+108h] [rbp-38h]
  unsigned __int64 v46; // [rsp+110h] [rbp-30h]

  v6 = a1; /*0x1003d593a*/
  v7 = 0x8000000000000019LL; /*0x1003d595b*/
  switch ( 0x8000000000000019LL ) /*0x1003d595e*/
  {
    case 0uLL: /*0x1003d595e*/
      dirs::audio_dir::ha945c9eaf00315b9(&v44); /*0x1003d5964*/
      v30 = 0x8000000000000019LL; /*0x1003d5969*/
      if ( v44 == (char *)0x8000000000000000LL ) /*0x1003d5979*/
        goto LABEL_33; /*0x1003d5979*/
      goto LABEL_3; /*0x1003d5979*/
    case 1uLL: /*0x1003d595e*/
      dirs::cache_dir::hb48e4b423190e57a(&v44); /*0x1003d5c68*/
      v30 = 0x8000000000000019LL; /*0x1003d5c6d*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5c7d*/
        goto LABEL_3; /*0x1003d5c7d*/
      goto LABEL_33; /*0x1003d5c7d*/
    case 2uLL: /*0x1003d595e*/
      dirs::data_dir::hb6650a44a938f2dc(&v44); /*0x1003d5b16*/
      v30 = 0x8000000000000019LL; /*0x1003d5b1b*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5b2b*/
        goto LABEL_3; /*0x1003d5b2b*/
      goto LABEL_33; /*0x1003d5b2b*/
    case 3uLL: /*0x1003d595e*/
      dirs::data_dir::hb6650a44a938f2dc(&v44); /*0x1003d5b75*/
      v30 = 0x8000000000000019LL; /*0x1003d5b7a*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5b8a*/
        goto LABEL_3; /*0x1003d5b8a*/
      goto LABEL_33; /*0x1003d5b8a*/
    case 4uLL: /*0x1003d595e*/
      dirs::data_dir::hb6650a44a938f2dc(&v44); /*0x1003d5ab7*/
      v30 = 0x8000000000000019LL; /*0x1003d5abc*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5acc*/
        goto LABEL_3; /*0x1003d5acc*/
      goto LABEL_33; /*0x1003d5acc*/
    case 5uLL: /*0x1003d595e*/
      dirs::document_dir::h03a9decf58dc1ac8(&v44); /*0x1003d5c17*/
      v30 = 0x8000000000000019LL; /*0x1003d5c1c*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5c2c*/
        goto LABEL_3; /*0x1003d5c2c*/
      goto LABEL_33; /*0x1003d5c2c*/
    case 6uLL: /*0x1003d595e*/
      dirs::download_dir::he71112ad602ddf17(&v44); /*0x1003d5a66*/
      v30 = 0x8000000000000019LL; /*0x1003d5a6b*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5a7b*/
        goto LABEL_3; /*0x1003d5a7b*/
      goto LABEL_33; /*0x1003d5a7b*/
    case 7uLL: /*0x1003d595e*/
      dirs::picture_dir::h49827979c4d58f81(&v44); /*0x1003d5bc6*/
      v30 = 0x8000000000000019LL; /*0x1003d5bcb*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5bdb*/
        goto LABEL_3; /*0x1003d5bdb*/
      goto LABEL_33; /*0x1003d5bdb*/
    case 8uLL: /*0x1003d595e*/
      dirs::public_dir::h21424b46bca24b57(&v44); /*0x1003d59c7*/
      v30 = 0x8000000000000019LL; /*0x1003d59cc*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d59dc*/
        goto LABEL_3; /*0x1003d59dc*/
      goto LABEL_33; /*0x1003d59dc*/
    case 9uLL: /*0x1003d595e*/
      dirs::video_dir::h63509b0487edc738(&v44); /*0x1003d5a15*/
      v30 = 0x8000000000000019LL; /*0x1003d5a1a*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5a2a*/
        goto LABEL_3; /*0x1003d5a2a*/
      goto LABEL_33; /*0x1003d5a2a*/
    case 0xAuLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::resource_dir::h60324136fa19022d(&v38); /*0x1003d5b67*/
      goto LABEL_4; /*0x1003d5b6c*/
    case 0xBuLL: /*0x1003d595e*/
      std::env::temp_dir::h8078010294fc1613(&v30); /*0x1003d5e6a*/
      v41 = v32; /*0x1003d5e76*/
      v40 = (__int64)v31; /*0x1003d5e88*/
      v39 = (char *)v30; /*0x1003d5e8c*/
      goto LABEL_38; /*0x1003d5e8c*/
    case 0xCuLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::app_config_dir::h4bfafbaf3cca7470(&v38); /*0x1003d5b08*/
      goto LABEL_4; /*0x1003d5b0d*/
    case 0xDuLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::app_data_dir::h3c7c5b48c5d5f562(&v38); /*0x1003d60aa*/
      goto LABEL_4; /*0x1003d60af*/
    case 0xEuLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::app_local_data_dir::h58342178fb338386(&v38); /*0x1003d5cb9*/
      goto LABEL_4; /*0x1003d5cbe*/
    case 0xFuLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::app_cache_dir::ha496c77fb351abac(&v38); /*0x1003d5d65*/
      goto LABEL_4; /*0x1003d5d6a*/
    case 0x10uLL: /*0x1003d595e*/
      tauri::path::desktop::PathResolver$LT$R$GT$::app_log_dir::h4f3f795f83a487af(&v38); /*0x1003d609c*/
      goto LABEL_4; /*0x1003d60a1*/
    case 0x11uLL: /*0x1003d595e*/
      dirs::desktop_dir::h77038a78695c13c9(&v44); /*0x1003d5cc7*/
      v30 = 0x8000000000000019LL; /*0x1003d5ccc*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5cdc*/
        goto LABEL_3; /*0x1003d5cdc*/
      goto LABEL_33; /*0x1003d5cdc*/
    case 0x12uLL: /*0x1003d595e*/
    case 0x15uLL: /*0x1003d595e*/
    case 0x16uLL: /*0x1003d595e*/
      goto LABEL_34;
    case 0x13uLL: /*0x1003d595e*/
      dirs::font_dir::hb92116d4b0694fa8(&v44); /*0x1003d5d18*/
      v30 = 0x8000000000000019LL; /*0x1003d5d1d*/
      if ( v44 != (char *)0x8000000000000000LL ) /*0x1003d5d2d*/
        goto LABEL_3; /*0x1003d5d2d*/
      goto LABEL_33; /*0x1003d5d2d*/
    case 0x14uLL: /*0x1003d595e*/
      dirs::home_dir::hc82e61f557956e66(&v44); /*0x1003d5d73*/
      v30 = 0x8000000000000019LL; /*0x1003d5d78*/
      if ( v44 == (char *)0x8000000000000000LL ) /*0x1003d5d88*/
      {
LABEL_33:
        v43 = v35; /*0x1003d5d8e*/
        v42 = v34; /*0x1003d5da0*/
        v41 = v33; /*0x1003d5dab*/
        v40 = v32; /*0x1003d5db6*/
        v39 = v31; /*0x1003d5dc8*/
        v38 = v30; /*0x1003d5dcc*/
        v7 = v30; /*0x1003d5dd0*/
      }
      else
      {
LABEL_3:
        v41 = v46; /*0x1003d597f*/
        v40 = v45; /*0x1003d598f*/
        v39 = v44; /*0x1003d5993*/
        v38 = 0x8000000000000025LL; /*0x1003d599c*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v30); /*0x1003d59a7*/
LABEL_4:
        v7 = v38; /*0x1003d59ac*/
        if ( v38 == 0x8000000000000025LL ) /*0x1003d59b8*/
        {
LABEL_38:
          v26 = v39; /*0x1003d5e90*/
          v27 = v40; /*0x1003d5ea3*/
          v28 = v41; /*0x1003d5eaa*/
          v10 = *a4; /*0x1003d5eb1*/
          if ( *a4 != 0x8000000000000000LL ) /*0x1003d5ebc*/
          {
            v11 = a4[1]; /*0x1003d5ec2*/
            v12 = a4[2]; /*0x1003d5ec6*/
            v25 = v11; /*0x1003d5ecf*/
            if ( a3 == 11 ) /*0x1003d5ed6*/
            {
              v29 = v10; /*0x1003d5edc*/
              v24 = a1; /*0x1003d5ee3*/
              v44 = nullptr; /*0x1003d5eea*/
              v45 = 1; /*0x1003d5ef2*/
              v46 = 0; /*0x1003d5efa*/
              std::path::Path::components::he8b0f71a48373be5(v20, v11, v12); /*0x1003d5f09*/
              v37 = v20[7]; /*0x1003d5f15*/
              v36 = v20[6]; /*0x1003d5f20*/
              v35 = v20[5]; /*0x1003d5f2e*/
              v34 = v20[4]; /*0x1003d5f3c*/
              v33 = v20[3]; /*0x1003d5f4a*/
              v32 = v20[2]; /*0x1003d5f58*/
              v31 = (char *)v20[1]; /*0x1003d5f6d*/
              v30 = v20[0]; /*0x1003d5f74*/
              while ( 1 ) /*0x1003d5fab*/
              {
                _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56fdb6f9bc0ab11( /*0x1003d5fab*/
                  &v38,
                  &v30);
                if ( (unsigned __int8)v38 == 10 ) /*0x1003d5fb8*/
                  break; /*0x1003d5fb8*/
                v15 = (unsigned __int8)v38 - 5LL; /*0x1003d5fbd*/
                if ( (unsigned __int8)v38 < 6u ) /*0x1003d5fc3*/
                  v15 = 0; /*0x1003d5fc3*/
                switch ( v15 ) /*0x1003d5fce*/
                {
                  case 0LL: /*0x1003d5fce*/
                  case 2LL: /*0x1003d5fce*/
                    continue;
                  case 1LL: /*0x1003d5fce*/
                    v14 = 6; /*0x1003d5fd0*/
                    v13 = (char *)&unk_1016F2279; /*0x1003d5fd5*/
                    goto LABEL_42; /*0x1003d5fdc*/
                  case 3LL: /*0x1003d5fce*/
                    v14 = 4; /*0x1003d5fde*/
                    v13 = "_up_"; /*0x1003d5fe3*/
                    goto LABEL_42; /*0x1003d5fea*/
                  case 4LL: /*0x1003d5fce*/
                    v13 = v39; /*0x1003d5f95*/
                    v14 = v40; /*0x1003d5f99*/
LABEL_42:
                    std::path::PathBuf::_push::h326381e7fc7167f8(&v44, v13, v14); /*0x1003d5f9d*/
                    break; /*0x1003d5fa0*/
                }
              }
              v16 = v44; /*0x1003d5ffa*/
              v17 = v45; /*0x1003d5ffe*/
              std::path::PathBuf::_push::h326381e7fc7167f8(&v26, v45, v46); /*0x1003d6010*/
              v6 = v24; /*0x1003d6018*/
              v10 = v29; /*0x1003d6029*/
              if ( v16 ) /*0x1003d6030*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1003d603d*/
            }
            else
            {
              std::path::PathBuf::_push::h326381e7fc7167f8(&v26, v11, v12); /*0x1003d5ff3*/
            }
            if ( v10 ) /*0x1003d6045*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v10, 1); /*0x1003d6056*/
          }
          v6[3] = v28; /*0x1003d6062*/
          v18 = v26; /*0x1003d6066*/
          v6[2] = v27; /*0x1003d6074*/
          v6[1] = (unsigned __int64)v18; /*0x1003d6078*/
          *v6 = 0x8000000000000025LL; /*0x1003d6080*/
          return v6; /*0x1003d6080*/
        }
      }
LABEL_34:
      v23 = v41; /*0x1003d5de2*/
      v22 = v40; /*0x1003d5df5*/
      v21 = v39; /*0x1003d5dfc*/
      a1[5] = v43; /*0x1003d5e07*/
      a1[4] = v42; /*0x1003d5e0f*/
      a1[3] = v23; /*0x1003d5e1a*/
      v8 = (unsigned __int64)v21; /*0x1003d5e1e*/
      a1[2] = v22; /*0x1003d5e2c*/
      a1[1] = v8; /*0x1003d5e30*/
      *a1 = v7; /*0x1003d5e34*/
      v9 = *a4; /*0x1003d5e37*/
      if ( *a4 != 0x8000000000000000LL && v9 ) /*0x1003d5e4a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v9, 1); /*0x1003d5e59*/
      return v6;
  }
}