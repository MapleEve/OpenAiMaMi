// IDA Hex-Rays decompile evidence
// addr: 0x1003d2920
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..voice..aliyun_asr..AliyunAsrSession..probe..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb06e7e291f9c423f(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  volatile signed __int64 **v16; // r12
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  char v19; // r13
  char v20; // r13
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rdx
  signed __int64 v24; // rsi
  _QWORD *v25; // r14
  volatile signed __int64 **v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  char v29; // r13
  char v30; // r13
  __int64 v31; // rdi
  __int64 *v32; // r15
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  volatile signed __int64 *v39; // rax
  int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rdi
  volatile signed __int64 *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r14
  __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  volatile signed __int64 *v55; // rax
  __int64 v56; // r15
  __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // rsi
  int v60; // eax

  v4 = *(unsigned __int8 *)(a1 + 8); /*0x1003d2931*/
  if ( v4 == 3 ) /*0x1003d2938*/
  {
    v9 = *(unsigned __int8 *)(a1 + 492); /*0x1003d29a4*/
    switch ( v9 ) /*0x1003d29ae*/
    {
      case 5: /*0x1003d29ae*/
        v15 = *(_QWORD **)(a1 + 608); /*0x1003d2a59*/
        if ( v15 ) /*0x1003d2a63*/
        {
          v16 = (volatile signed __int64 **)(a1 + 608); /*0x1003d2a69*/
          v17 = v15[6]; /*0x1003d2a70*/
          do /*0x1003d2a8d*/
          {
            v18 = v17; /*0x1003d2a87*/
            v17 = _InterlockedCompareExchange64(v15 + 6, v17 | 4, v17); /*0x1003d2a87*/
          }
          while ( v18 != v17 ); /*0x1003d2a8d*/
          if ( (v17 & 0xA) == 8 ) /*0x1003d2a97*/
          {
            v19 = v17; /*0x1003d2aa1*/
            (*(void (__fastcall **)(_QWORD))(v15[2] + 16LL))(v15[3]); /*0x1003d2aa4*/
            LOBYTE(v17) = v19; /*0x1003d2aa7*/
          }
          if ( (v17 & 3) == 1 ) /*0x1003d2ab2*/
          {
            _InterlockedAnd64(v15 + 6, 0xFFFFFFFFFFFFFFFELL); /*0x1003d2ab4*/
            v20 = v17; /*0x1003d2abe*/
            tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v15 + 4, a2, a3); /*0x1003d2ac1*/
            LOBYTE(v17) = v20; /*0x1003d2ac6*/
          }
          if ( (v17 & 2) != 0 ) /*0x1003d2acb*/
          {
            a2 = v15[7]; /*0x1003d2acd*/
            v21 = v15[8]; /*0x1003d2ad1*/
            v15[7] = 0x8000000000000001LL; /*0x1003d2ae3*/
            if ( a2 >= (__int64)0x8000000000000002LL ) /*0x1003d2af4*/
            {
              if ( a2 ) /*0x1003d2af9*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, a2, 1); /*0x1003d2b00*/
            }
          }
          if ( *v16 && !_InterlockedDecrement64(*v16) ) /*0x1003d2b0e*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(a1 + 608, a2, a3); /*0x1003d2b17*/
        }
        core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h49c9018a708d3037(a1 + 496); /*0x1003d2b1f*/
        break;
      case 4: /*0x1003d29ae*/
        v12 = *(_QWORD *)(a1 + 504); /*0x1003d2a14*/
        if ( v12 != 0x8000000000000005LL ) /*0x1003d2a1e*/
        {
          v13 = 5; /*0x1003d2a2e*/
          if ( v12 < 0 ) /*0x1003d2a33*/
            v13 = v12 ^ 0x8000000000000000LL; /*0x1003d2a33*/
          if ( v13 >= 4 ) /*0x1003d2a3b*/
          {
            v14 = 504; /*0x1003d2b3c*/
            if ( v13 == 4 ) /*0x1003d2b41*/
            {
              v12 = *(_QWORD *)(a1 + 512); /*0x1003d2b43*/
              v14 = 512; /*0x1003d2b4e*/
              if ( v12 < (__int64)0x8000000000000002LL ) /*0x1003d2b56*/
                break; /*0x1003d2b56*/
            }
          }
          else
          {
            v12 = *(_QWORD *)(a1 + 512); /*0x1003d2a41*/
            v14 = 512; /*0x1003d2a48*/
          }
          if ( v12 ) /*0x1003d2b5b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + v14 + 8), v12, 1); /*0x1003d2b67*/
        }
        break;
      case 3: /*0x1003d29ae*/
        if ( !*(_BYTE *)(a1 + 11112) ) /*0x1003d29cb*/
        {
          v11 = 480; /*0x1003d2b26*/
LABEL_41:
          core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v11 + a1 + 16); /*0x1003d2b2b*/
          goto LABEL_79; /*0x1003d2b37*/
        }
        if ( *(_BYTE *)(a1 + 11112) != 3 ) /*0x1003d29d4*/
        {
LABEL_79:
          *(_BYTE *)(a1 + 482) = 0; /*0x1003d2d5a*/
          *(_BYTE *)(a1 + 491) = 0; /*0x1003d2d61*/
          return; /*0x1003d2d61*/
        }
        v10 = *(unsigned __int8 *)(a1 + 11105); /*0x1003d29da*/
        if ( (_DWORD)v10 != 3 ) /*0x1003d29e4*/
        {
          v11 = 704; /*0x1003d29ea*/
          if ( *(_BYTE *)(a1 + 11105) ) /*0x1003d29da*/
            goto LABEL_79; /*0x1003d29f1*/
          goto LABEL_41; /*0x1003d29f1*/
        }
        v36 = *(unsigned __int8 *)(a1 + 1907); /*0x1003d2dca*/
        if ( v36 != 4 ) /*0x1003d2dd4*/
        {
          if ( v36 != 3 ) /*0x1003d2ddd*/
          {
            if ( !*(_BYTE *)(a1 + 1907) ) /*0x1003d2dca*/
            {
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 1256); /*0x1003d2df5*/
              if ( *(_QWORD *)(a1 + 1240) ) /*0x1003d2dfa*/
              {
                v39 = *(volatile signed __int64 **)(a1 + 1248); /*0x1003d2e04*/
                if ( v39 ) /*0x1003d2e0e*/
                {
                  if ( !_InterlockedDecrement64(v39) ) /*0x1003d2e14*/
                    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(a1 + 1248, a2, v37, v38); /*0x1003d2e25*/
                }
              }
            }
            goto LABEL_79; /*0x1003d2e2a*/
          }
          v40 = *(unsigned __int8 *)(a1 + 1936); /*0x1003d2e2f*/
          if ( v40 == 4 ) /*0x1003d2e39*/
          {
            if ( *(_BYTE *)(a1 + 2072) == 3 ) /*0x1003d2f3c*/
            {
              if ( *(_BYTE *)(a1 + 2068) == 3 ) /*0x1003d2f4c*/
              {
                _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(a1 + 2024); /*0x1003d3096*/
                v51 = *(unsigned int *)(a1 + 2048); /*0x1003d309b*/
                if ( (_DWORD)v51 != -1 ) /*0x1003d30a4*/
                  close_NOCANCEL(v51); /*0x1003d30a6*/
                core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1 + 2024); /*0x1003d30ae*/
              }
              else if ( !*(_BYTE *)(a1 + 2068) ) /*0x1003d2f42*/
              {
                close_NOCANCEL(*(unsigned int *)(a1 + 2064)); /*0x1003d2f60*/
              }
            }
            if ( *(_DWORD *)(a1 + 1952) ) /*0x1003d30b3*/
            {
              v52 = *(_QWORD *)(a1 + 1976); /*0x1003d30bc*/
              if ( v52 ) /*0x1003d30c6*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 1960), 32 * v52, 4); /*0x1003d30d8*/
            }
            v53 = *(_QWORD *)(a1 + 1944); /*0x1003d30dd*/
            v10 = v53 & 3; /*0x1003d30e6*/
            if ( (v53 & 3) == 1 ) /*0x1003d30ec*/
            {
              v56 = v53 - 1; /*0x1003d3176*/
              v57 = *(_QWORD *)(v53 - 1); /*0x1003d317a*/
              v58 = *(_QWORD *)(v53 + 7); /*0x1003d317e*/
              if ( *(_QWORD *)v58 ) /*0x1003d3182*/
                (*(void (__fastcall **)(__int64))v58)(v57); /*0x1003d318e*/
              v59 = *(_QWORD *)(v58 + 8); /*0x1003d3190*/
              if ( v59 ) /*0x1003d3197*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v59, *(_QWORD *)(v58 + 16)); /*0x1003d31a0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24, 8); /*0x1003d31b2*/
            }
            *(_BYTE *)(a1 + 1937) = 0; /*0x1003d30f2*/
          }
          else
          {
            if ( v40 != 3 ) /*0x1003d2e42*/
            {
              if ( !*(_BYTE *)(a1 + 1936) ) /*0x1003d2e2f*/
              {
                v41 = *(_QWORD *)(a1 + 1912); /*0x1003d2e50*/
                if ( v41 ) /*0x1003d2e5a*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 1920), v41, 1); /*0x1003d2e6c*/
              }
              goto LABEL_144; /*0x1003d2e71*/
            }
            if ( *(_WORD *)(a1 + 1944) == 3 ) /*0x1003d2f0b*/
            {
              v45 = *(_QWORD *)(a1 + 1952); /*0x1003d2f11*/
              if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v45) ) /*0x1003d2f1b*/
                tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v45); /*0x1003d2f2b*/
            }
          }
          *(_BYTE *)(a1 + 1938) = 0; /*0x1003d30f9*/
LABEL_144:
          v54 = *(_QWORD *)(a1 + 1848); /*0x1003d3100*/
          if ( v54 ) /*0x1003d310a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 1856), v54, 1); /*0x1003d3118*/
          if ( *(_BYTE *)(a1 + 1909) ) /*0x1003d311d*/
          {
            if ( *(_QWORD *)(a1 + 2080) ) /*0x1003d3126*/
            {
              v55 = *(volatile signed __int64 **)(a1 + 2088); /*0x1003d3130*/
              if ( v55 ) /*0x1003d313a*/
              {
                if ( !_InterlockedDecrement64(v55) ) /*0x1003d313c*/
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(a1 + 2088, v54, a3, v10); /*0x1003d3149*/
              }
            }
          }
          *(_BYTE *)(a1 + 1909) = 0; /*0x1003d314e*/
          if ( *(_BYTE *)(a1 + 1910) ) /*0x1003d3155*/
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 1552); /*0x1003d3165*/
          *(_BYTE *)(a1 + 1910) = 0; /*0x1003d316a*/
          goto LABEL_79; /*0x1003d3171*/
        }
        v42 = a1 + 1912; /*0x1003d2e87*/
        switch ( *(_BYTE *)(a1 + 2600) ) /*0x1003d2e9c*/
        {
          case 0: /*0x1003d2e9c*/
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 1960); /*0x1003d2ea5*/
            _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(a1 + 1912); /*0x1003d2ead*/
            v43 = *(unsigned int *)(a1 + 1936); /*0x1003d2eb2*/
            if ( (_DWORD)v43 != -1 ) /*0x1003d2ebb*/
              close_NOCANCEL(v43); /*0x1003d2ebd*/
            core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1 + 1912); /*0x1003d2ec5*/
            if ( *(_QWORD *)(a1 + 1944) ) /*0x1003d2eca*/
            {
              v44 = *(volatile signed __int64 **)(a1 + 1952); /*0x1003d2ed8*/
              if ( v44 ) /*0x1003d2ee2*/
              {
                if ( !_InterlockedDecrement64(v44) ) /*0x1003d2ee8*/
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(a1 + 1952, a2, a3, v10); /*0x1003d2ef9*/
              }
            }
            goto LABEL_144; /*0x1003d2efe*/
          case 3: /*0x1003d2e9c*/
          case 5: /*0x1003d2e9c*/
            core::ptr::drop_in_place$LT$tokio_tungstenite..tls..encryption..rustls..wrap_stream$LT$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6bbfed6c0bce5ff4(a1 + 2608); /*0x1003d2fb1*/
            goto LABEL_118; /*0x1003d2fb1*/
          case 4: /*0x1003d2e9c*/
            if ( !*(_BYTE *)(a1 + 2641) ) /*0x1003d2f6a*/
            {
              _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(a1 + 2608); /*0x1003d2f7d*/
              v46 = *(unsigned int *)(a1 + 2632); /*0x1003d2f82*/
              if ( (_DWORD)v46 != -1 ) /*0x1003d2f8b*/
                close_NOCANCEL(v46); /*0x1003d2f8d*/
              core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1 + 2608); /*0x1003d2f95*/
            }
LABEL_118:
            if ( *(_BYTE *)(a1 + 2601) ) /*0x1003d2fb6*/
            {
              v47 = *(_QWORD *)(a1 + 2568); /*0x1003d2fbf*/
              if ( v47 ) /*0x1003d2fc9*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 2576), v47, 1); /*0x1003d2fd7*/
            }
            *(_BYTE *)(a1 + 2601) = 0; /*0x1003d2fdc*/
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 2344); /*0x1003d2fea*/
            goto LABEL_134; /*0x1003d2fef*/
          case 6: /*0x1003d2e9c*/
            if ( *(_BYTE *)(a1 + 11096) != 3 ) /*0x1003d2ffe*/
            {
              if ( *(_BYTE *)(a1 + 11096) ) /*0x1003d2ff4*/
                goto LABEL_130; /*0x1003d3002*/
              v48 = 920; /*0x1003d300b*/
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 2608); /*0x1003d3011*/
              goto LABEL_125; /*0x1003d3011*/
            }
            if ( *(_BYTE *)(a1 + 11088) == 3 ) /*0x1003d302d*/
            {
              v60 = *(unsigned __int8 *)(a1 + 6784); /*0x1003d31bc*/
              if ( v60 == 4 ) /*0x1003d31c6*/
              {
                if ( *(_DWORD *)(a1 + 6792) != 3 ) /*0x1003d3217*/
                {
                  core::ptr::drop_in_place$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$::h7543d5687e683bef(a1 + 6792); /*0x1003d3224*/
                  core::ptr::drop_in_place$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$::h0662d2b5c4ad7939(a1 + 6912); /*0x1003d3230*/
                  core::ptr::drop_in_place$LT$tungstenite..handshake..machine..HandshakeState$GT$::hc3a3b7f9acc6a720(a1 + 8024); /*0x1003d323c*/
                }
              }
              else
              {
                if ( v60 != 3 ) /*0x1003d31cb*/
                {
                  if ( *(_BYTE *)(a1 + 6784) ) /*0x1003d31bc*/
                    goto LABEL_130; /*0x1003d31cf*/
                  v49 = 4576; /*0x1003d31dc*/
                  core::ptr::drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$::h96ec2d68c3075927(a1 + 5392); /*0x1003d31e2*/
                  goto LABEL_129; /*0x1003d31e7*/
                }
                if ( *(_DWORD *)(a1 + 6792) != 3 ) /*0x1003d31f3*/
                {
                  v48 = 5176; /*0x1003d3200*/
                  core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 6792); /*0x1003d3206*/
LABEL_125:
                  core::ptr::drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$::h96ec2d68c3075927(v48 + v42); /*0x1003d3016*/
                }
              }
            }
            else if ( !*(_BYTE *)(a1 + 11088) ) /*0x1003d3023*/
            {
              v49 = 3184; /*0x1003d303e*/
              core::ptr::drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$::h96ec2d68c3075927(a1 + 4000); /*0x1003d3044*/
LABEL_129:
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v49 + v42); /*0x1003d3049*/
            }
LABEL_130:
            if ( *(_BYTE *)(a1 + 2601) ) /*0x1003d3054*/
            {
              v50 = *(_QWORD *)(a1 + 2568); /*0x1003d305d*/
              if ( v50 ) /*0x1003d3067*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 2576), v50, 1); /*0x1003d3075*/
            }
            *(_BYTE *)(a1 + 2601) = 0; /*0x1003d307a*/
LABEL_134:
            *(_WORD *)(a1 + 2602) = 0; /*0x1003d3081*/
            goto LABEL_144; /*0x1003d308a*/
          default:
            goto LABEL_144;
        }
      default:
        return; /*0x1003d29bc*/
    }
    *(_BYTE *)(a1 + 483) = 0; /*0x1003d2b6c*/
    v22 = *(_QWORD *)(a1 + 464); /*0x1003d2b73*/
    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v22) ) /*0x1003d2b7d*/
      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v22); /*0x1003d2b89*/
    v24 = *(_QWORD *)(a1 + 440); /*0x1003d2b8e*/
    if ( v24 ) /*0x1003d2b98*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 448), v24, 1); /*0x1003d2ba6*/
    *(_BYTE *)(a1 + 484) = 0; /*0x1003d2bb5*/
    if ( *(_BYTE *)(a1 + 481) ) /*0x1003d2bbc*/
    {
      v25 = *(_QWORD **)(a1 + 496); /*0x1003d2bc9*/
      if ( v25 ) /*0x1003d2bd3*/
      {
        v26 = (volatile signed __int64 **)(a1 + 496); /*0x1003d2bd9*/
        v27 = v25[6]; /*0x1003d2be0*/
        do /*0x1003d2bfd*/
        {
          v28 = v27; /*0x1003d2bf7*/
          v27 = _InterlockedCompareExchange64(v25 + 6, v27 | 4, v27); /*0x1003d2bf7*/
        }
        while ( v28 != v27 ); /*0x1003d2bfd*/
        if ( (v27 & 0xA) == 8 ) /*0x1003d2c07*/
        {
          v29 = v27; /*0x1003d2c11*/
          (*(void (__fastcall **)(_QWORD))(v25[2] + 16LL))(v25[3]); /*0x1003d2c14*/
          LOBYTE(v27) = v29; /*0x1003d2c17*/
        }
        if ( (v27 & 3) == 1 ) /*0x1003d2c22*/
        {
          _InterlockedAnd64(v25 + 6, 0xFFFFFFFFFFFFFFFELL); /*0x1003d2c24*/
          v30 = v27; /*0x1003d2c2e*/
          tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v25 + 4, v24, v23); /*0x1003d2c31*/
          LOBYTE(v27) = v30; /*0x1003d2c36*/
        }
        if ( (v27 & 2) != 0 ) /*0x1003d2c3b*/
        {
          v24 = v25[7]; /*0x1003d2c3d*/
          v31 = v25[8]; /*0x1003d2c41*/
          v25[7] = 0x8000000000000001LL; /*0x1003d2c4a*/
          if ( v24 >= (__int64)0x8000000000000002LL ) /*0x1003d2c5b*/
          {
            if ( v24 ) /*0x1003d2c60*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v24, 1); /*0x1003d2c67*/
          }
        }
        if ( *v26 && !_InterlockedDecrement64(*v26) ) /*0x1003d2c74*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(a1 + 496, v24, v23); /*0x1003d2c7d*/
      }
    }
    *(_BYTE *)(a1 + 481) = 0; /*0x1003d2c82*/
    *(_BYTE *)(a1 + 485) = 0; /*0x1003d2c89*/
    _$LT$tokio..sync..mpsc..chan..Rx$LT$T$C$S$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc6e728fbea7ca2d8(a1 + 432); /*0x1003d2c9a*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 432)) ) /*0x1003d2ca2*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h27faf00dded5e896(a1 + 432); /*0x1003d2cab*/
    *(_WORD *)(a1 + 486) = 0; /*0x1003d2cb0*/
    *(_BYTE *)(a1 + 488) = 0; /*0x1003d2cb9*/
    v32 = (__int64 *)(a1 + 240); /*0x1003d2cc0*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 280)) ) /*0x1003d2cce*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h57ffbf3b6d0b5b2e(a1 + 280); /*0x1003d2cdb*/
    v33 = *v32; /*0x1003d2ce0*/
    if ( *v32 == 0x8000000000000005LL ) /*0x1003d2ce6*/
      goto LABEL_78; /*0x1003d2ce6*/
    v34 = 5; /*0x1003d2cf3*/
    if ( v33 < 0 ) /*0x1003d2cf8*/
      v34 = v33 ^ 0x8000000000000000LL; /*0x1003d2cf8*/
    if ( v34 >= 4 ) /*0x1003d2d00*/
    {
      v35 = 240; /*0x1003d2d10*/
      if ( v34 == 4 ) /*0x1003d2d15*/
      {
        v33 = *(_QWORD *)(a1 + 248); /*0x1003d2d17*/
        v35 = 248; /*0x1003d2d22*/
        if ( v33 < (__int64)0x8000000000000002LL ) /*0x1003d2d2a*/
        {
LABEL_78:
          *(_BYTE *)(a1 + 489) = 0; /*0x1003d2d40*/
          core::ptr::drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h0533a8ba1061ed83(a1 + 296); /*0x1003d2d4e*/
          *(_BYTE *)(a1 + 490) = 0; /*0x1003d2d53*/
          goto LABEL_79; /*0x1003d2d53*/
        }
      }
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 248); /*0x1003d2d02*/
      v35 = 248; /*0x1003d2d09*/
    }
    if ( v33 ) /*0x1003d2d2f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + v35 + 8), v33, 1); /*0x1003d2d3b*/
    goto LABEL_78; /*0x1003d2d3b*/
  }
  if ( v4 == 4 ) /*0x1003d293d*/
  {
    v5 = *(unsigned __int8 *)(a1 + 96); /*0x1003d2943*/
    if ( v5 != 5 ) /*0x1003d294a*/
    {
      if ( v5 == 4 ) /*0x1003d2953*/
      {
        core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h49c9018a708d3037(a1 + 104); /*0x1003d2a00*/
      }
      else
      {
        if ( v5 != 3 ) /*0x1003d295c*/
        {
LABEL_86:
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..aliyun_asr..AliyunAsrSession$GT$::hc0f17d24a2dc5b95(a1 + 216); /*0x1003d2dad*/
          return; /*0x1003d2dc5*/
        }
        v6 = *(_QWORD *)(a1 + 104); /*0x1003d296c*/
        if ( v6 != 0x8000000000000005LL ) /*0x1003d2973*/
        {
          v7 = 5; /*0x1003d2983*/
          if ( v6 < 0 ) /*0x1003d2988*/
            v7 = v6 ^ 0x8000000000000000LL; /*0x1003d2988*/
          if ( v7 >= 4 ) /*0x1003d2990*/
          {
            v8 = 104; /*0x1003d2d77*/
            if ( v7 == 4 ) /*0x1003d2d7c*/
            {
              v6 = *(_QWORD *)(a1 + 112); /*0x1003d2d7e*/
              v8 = 112; /*0x1003d2d86*/
              if ( v6 < (__int64)0x8000000000000002LL ) /*0x1003d2d8e*/
                goto LABEL_85; /*0x1003d2d8e*/
            }
          }
          else
          {
            v6 = *(_QWORD *)(a1 + 112); /*0x1003d2996*/
            v8 = 112; /*0x1003d299a*/
          }
          if ( v6 ) /*0x1003d2d93*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + v8 + 8), v6, 1); /*0x1003d2d9f*/
        }
      }
    }
LABEL_85:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a1 + 64); /*0x1003d2da4*/
    goto LABEL_86; /*0x1003d2da8*/
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x1012b9ad0  __ZN5tokio4sync7oneshot4Task9drop_task17hb112efae565ccdfdE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x10076afa0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17hde30840f551911ccE
// 0x1003f8010  __ZN4core3ptr46drop_in_place$LT$tokio..time..sleep..Sleep$GT$17h49c9018a708d3037E_3
// 0x1003f6f70  __ZN4core3ptr41drop_in_place$LT$http..request..Parts$GT$17h8de5979c17c50e06E_3
// 0x100f47130  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h3a9626c44d95f7f7E
// 0x100243230  __ZN87_$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17h8f3ca559a76632e4E
// 0x1014afa00  _close$NOCANCEL
// 0x1003fcb20  __ZN4core3ptr67drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$17h4a01551a0288ecb6E_3
// 0x1012b8b80  __ZN5tokio7runtime4task3raw7RawTask21drop_join_handle_slow17h992aae8c362d2517E
// 0x1012ba4a0  __ZN5tokio7runtime4task5state5State21drop_join_handle_fast17h261ebd480c6ca3c1E
// 0x1003e01e0  __ZN4core3ptr147drop_in_place$LT$tokio_tungstenite..tls..encryption..rustls..wrap_stream$LT$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h6bbfed6c0bce5ff4E_1
// 0x1003e6aa0  __ZN4core3ptr202drop_in_place$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$17h7543d5687e683befE_0
// 0x1003e0140  __ZN4core3ptr147drop_in_place$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$17h0662d2b5c4ad7939E_1
// 0x1003fd020  __ZN4core3ptr68drop_in_place$LT$tungstenite..handshake..machine..HandshakeState$GT$17hc3a3b7f9acc6a720E_1
// 0x1003d1620  __ZN4core3ptr104drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$17h96ec2d68c3075927E_1
// 0x1004b94e0  __ZN82_$LT$tokio..sync..mpsc..chan..Rx$LT$T$C$S$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hc6e728fbea7ca2d8E
// 0x100769cd0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h27faf00dded5e896E
// 0x10076a4c0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h57ffbf3b6d0b5b2eE
// 0x1003d1790  __ZN4core3ptr106drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$17h0533a8ba1061ed83E_1
// 0x1003fe870  __ZN4core3ptr77drop_in_place$LT$codexmate_lib..core..voice..aliyun_asr..AliyunAsrSession$GT$17hc0f17d24a2dc5b95E_1
// 0x1003f7dd0  __ZN4core3ptr45drop_in_place$LT$serde_json..value..Value$GT$17ha4e28df99e528884E_4
