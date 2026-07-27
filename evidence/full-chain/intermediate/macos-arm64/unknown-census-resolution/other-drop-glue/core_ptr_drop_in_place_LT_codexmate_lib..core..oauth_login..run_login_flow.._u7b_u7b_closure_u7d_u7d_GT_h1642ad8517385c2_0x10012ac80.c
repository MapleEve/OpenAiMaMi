// IDA Hex-Rays decompile evidence
// addr: 0x10012ac80
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_login..run_login_flow..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1642ad8517385c26(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  volatile signed __int64 **v5; // rbx
  char v6; // al
  char v7; // r15
  char v8; // r15
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  volatile signed __int64 **v13; // r15
  __int64 v14; // r14
  volatile signed __int64 **v15; // r15
  char v16; // al
  char v17; // r12
  char v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rsi

  switch ( *(_BYTE *)(a1 + 128) ) /*0x10012acad*/
  {
    case 0: /*0x10012acad*/
      if ( *(_QWORD *)a1 ) /*0x10012acaf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1); /*0x10012acc0*/
      v3 = *(_QWORD *)(a1 + 24); /*0x10012acc5*/
      if ( v3 ) /*0x10012accc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 32), v3, 1); /*0x10012acd7*/
      v4 = *(_QWORD *)(a1 + 48); /*0x10012acdc*/
      if ( v4 ) /*0x10012ace3*/
      {
        v5 = (volatile signed __int64 **)(a1 + 48); /*0x10012ace9*/
        v6 = _InterlockedOr64((volatile signed __int64 *)(v4 + 48), 4u); /*0x10012ad07*/
        if ( (v6 & 0xA) == 8 ) /*0x10012ad17*/
        {
          v7 = v6; /*0x10012ad21*/
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 16) + 16LL))(*(_QWORD *)(v4 + 24)); /*0x10012ad24*/
          v6 = v7; /*0x10012ad27*/
        }
        if ( (v6 & 3) == 1 ) /*0x10012ad32*/
        {
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0xFFFFFFFFFFFFFFFELL); /*0x10012ad34*/
          v8 = v6; /*0x10012ad3e*/
          tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v4 + 32, v3, a3); /*0x10012ad41*/
          v6 = v8; /*0x10012ad46*/
        }
        if ( (v6 & 2) != 0 ) /*0x10012ad4b*/
          *(_BYTE *)(v4 + 56) = 0; /*0x10012ad4d*/
        if ( *v5 ) /*0x10012ad52*/
        {
          if ( !_InterlockedDecrement64(*v5) ) /*0x10012ad5e*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(v5); /*0x10012ad73*/
        }
      }
      return; /*0x10012ad73*/
    case 3: /*0x10012acad*/
      if ( *(_BYTE *)(a1 + 224) == 3 && *(_WORD *)(a1 + 192) == 3 ) /*0x10012ad9a*/
      {
        v9 = *(_QWORD *)(a1 + 200); /*0x10012ad9c*/
        if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v9) ) /*0x10012ada6*/
          tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v9); /*0x10012adb2*/
      }
      *(_BYTE *)(a1 + 140) = 0; /*0x10012adb7*/
      if ( *(_BYTE *)(a1 + 132) ) /*0x10012adbe*/
        goto LABEL_41; /*0x10012adc5*/
      goto LABEL_51; /*0x10012adc5*/
    case 4: /*0x10012acad*/
      core::ptr::drop_in_place$LT$$LP$tokio..sync..oneshot..Receiver$LT$codexmate_lib..core..oauth_login..CallbackOutcome$GT$$C$tokio..sync..oneshot..Receiver$LT$$LP$$RP$$GT$$C$tokio..time..sleep..Sleep$RP$$GT$::hc047119ede189b73( /*0x10012ad7f*/
        (volatile signed __int64 **)(a1 + 160),
        a2,
        a3);
      goto LABEL_30; /*0x10012ad84*/
    case 5: /*0x10012acad*/
      v10 = *(_QWORD *)(a1 + 264); /*0x10012add7*/
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v10) ) /*0x10012ade1*/
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v10); /*0x10012aded*/
      core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h49c9018a708d3037(a1 + 152); /*0x10012adf5*/
      _$LT$tokio..runtime..task..abort..AbortHandle$u20$as$u20$core..ops..drop..Drop$GT$::drop::h59807437573a4a31(a1 + 144); /*0x10012ae01*/
      switch ( *(_QWORD *)(a1 + 96) ) /*0x10012ae18*/
      {
        case 0LL: /*0x10012ae18*/
        case 3LL: /*0x10012ae18*/
          a2 = *(_QWORD *)(a1 + 104); /*0x10012ae1a*/
          goto LABEL_28; /*0x10012ae1e*/
        case 1LL: /*0x10012ae18*/
        case 2LL: /*0x10012ae18*/
          break;
        case 4LL: /*0x10012ae18*/
          a2 = *(_QWORD *)(a1 + 104); /*0x10012ae20*/
          if ( !__OFSUB__(-a2, 1) ) /*0x10012ae2a*/
          {
LABEL_28:
            if ( a2 ) /*0x10012ae2f*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 112), a2, 1); /*0x10012ae3a*/
          }
          break; /*0x10012ae3a*/
      }
LABEL_30:
      *(_BYTE *)(a1 + 134) = 0; /*0x10012ae3f*/
      if ( *(_BYTE *)(a1 + 130) ) /*0x10012ae46*/
      {
        v11 = *(_QWORD *)(a1 + 88); /*0x10012ae4f*/
        if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v11) ) /*0x10012ae56*/
          tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v11); /*0x10012ae62*/
      }
      *(_BYTE *)(a1 + 130) = 0; /*0x10012ae67*/
      *(_BYTE *)(a1 + 135) = 0; /*0x10012ae6e*/
      if ( *(_BYTE *)(a1 + 131) ) /*0x10012ae75*/
      {
        v12 = *(_QWORD *)(a1 + 80); /*0x10012ae7e*/
        if ( v12 ) /*0x10012ae85*/
        {
          v13 = (volatile signed __int64 **)(a1 + 80); /*0x10012ae87*/
          if ( (tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(v12 + 48) & 5) == 1 ) /*0x10012ae9a*/
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v12 + 32) + 16LL))(*(_QWORD *)(v12 + 40)); /*0x10012aea4*/
          if ( *v13 && !_InterlockedDecrement64(*v13) ) /*0x10012aeaf*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(a1 + 80); /*0x10012aeb8*/
        }
      }
      *(_BYTE *)(a1 + 131) = 0; /*0x10012aebd*/
      *(_DWORD *)(a1 + 136) = 0; /*0x10012aec4*/
      *(_BYTE *)(a1 + 140) = 0; /*0x10012aece*/
      if ( *(_BYTE *)(a1 + 132) ) /*0x10012aed5*/
      {
LABEL_41:
        v14 = *(_QWORD *)(a1 + 168); /*0x10012aee2*/
        if ( v14 ) /*0x10012aeec*/
        {
          v15 = (volatile signed __int64 **)(a1 + 168); /*0x10012aeee*/
          v16 = _InterlockedOr64((volatile signed __int64 *)(v14 + 48), 4u); /*0x10012af07*/
          if ( (v16 & 0xA) == 8 ) /*0x10012af17*/
          {
            v17 = v16; /*0x10012af21*/
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v14 + 16) + 16LL))(*(_QWORD *)(v14 + 24)); /*0x10012af24*/
            v16 = v17; /*0x10012af27*/
          }
          if ( (v16 & 3) == 1 ) /*0x10012af32*/
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0xFFFFFFFFFFFFFFFELL); /*0x10012af34*/
            v18 = v16; /*0x10012af3e*/
            tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v14 + 32, a2, a3); /*0x10012af41*/
            v16 = v18; /*0x10012af46*/
          }
          if ( (v16 & 2) != 0 ) /*0x10012af4b*/
            *(_BYTE *)(v14 + 56) = 0; /*0x10012af4d*/
          if ( *v15 && !_InterlockedDecrement64(*v15) ) /*0x10012af5a*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(a1 + 168); /*0x10012af63*/
        }
      }
LABEL_51:
      *(_BYTE *)(a1 + 132) = 0; /*0x10012af68*/
      v19 = *(_QWORD *)(a1 + 56); /*0x10012af6f*/
      if ( v19 ) /*0x10012af76*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 64), v19, 1); /*0x10012af81*/
      if ( *(_BYTE *)(a1 + 133) ) /*0x10012af86*/
      {
        v20 = *(_QWORD *)(a1 + 144); /*0x10012af8f*/
        if ( v20 ) /*0x10012af99*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 152), v20, 1); /*0x10012afa7*/
      }
      *(_BYTE *)(a1 + 133) = 0; /*0x10012afac*/
      break; /*0x10012afac*/
    default:
      return;
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1012b9ad0  __ZN5tokio4sync7oneshot4Task9drop_task17hb112efae565ccdfdE
// 0x1012ad550  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h0c4e0b817f20a841E
// 0x1012b8b80  __ZN5tokio7runtime4task3raw7RawTask21drop_join_handle_slow17h992aae8c362d2517E
// 0x1012ba4a0  __ZN5tokio7runtime4task5state5State21drop_join_handle_fast17h261ebd480c6ca3c1E
// 0x1000fd900  __ZN4core3ptr193drop_in_place$LT$$LP$tokio..sync..oneshot..Receiver$LT$codexmate_lib..core..oauth_login..CallbackOutcome$GT$$C$tokio..sync..oneshot..Receiver$LT$$LP$$RP$$GT$$C$tokio..time..sleep..Sleep$RP$$GT$17hc047119ede189b73E
// 0x100122c30  __ZN4core3ptr46drop_in_place$LT$tokio..time..sleep..Sleep$GT$17h49c9018a708d3037E_0
// 0x1012c3af0  __ZN82_$LT$tokio..runtime..task..abort..AbortHandle$u20$as$u20$core..ops..drop..Drop$GT$4drop17h59807437573a4a31E
// 0x1012b9ae0  __ZN5tokio4sync7oneshot5State12set_complete17h59099fb12c33618fE
