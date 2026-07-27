// __ZN13codexmate_lib8commands6system33confirm_pending_auto_switch_async28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000eac80
char __fastcall codexmate_lib::commands::system::confirm_pending_auto_switch_async::_$u7b$$u7b$closure$u7d$$u7d$::hcdcfa49b69f35fa8(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  char result; // al
  __int64 v5; // r12
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  _BYTE v8[456]; // [rsp+8h] [rbp-7A8h] BYREF
  _QWORD v9[56]; // [rsp+1D0h] [rbp-5E0h] BYREF
  unsigned __int64 v10; // [rsp+390h] [rbp-420h] BYREF
  _BYTE *v11; // [rsp+398h] [rbp-418h]
  __int64 (__fastcall *v12)(); // [rsp+3A0h] [rbp-410h]
  _QWORD v13[57]; // [rsp+3A8h] [rbp-408h] BYREF
  _BYTE __dst[488]; // [rsp+570h] [rbp-240h] BYREF
  _QWORD v15[3]; // [rsp+758h] [rbp-58h] BYREF
  _BYTE *v16; // [rsp+770h] [rbp-40h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+778h] [rbp-38h]
  __int64 v18; // [rsp+780h] [rbp-30h]

  switch ( *(_BYTE *)(a2 + 160) ) /*0x1000eacaf*/
  {
    case 0: /*0x1000eacaf*/
      memcpy(__dst, (const void *)a2, 0x98u); /*0x1000eacc6*/
      *(_QWORD *)(a2 + 152) = tauri::async_runtime::spawn_blocking::h339f178abea50814(__dst); /*0x1000eacd3*/
      break; /*0x1000eacd3*/
    case 1: /*0x1000eacaf*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952A50); /*0x1000eaf1b*/
    case 2: /*0x1000eacaf*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952A50); /*0x1000eaf0f*/
    case 3: /*0x1000eacaf*/
      break;
  }
  _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hc15b857fd7c934ae(__dst); /*0x1000eacdd*/
  v2 = *(_QWORD *)__dst; /*0x1000eacf3*/
  if ( *(_QWORD *)__dst == 4 )
  {
    *a1 = 3; /*0x1000ead33*/
    result = 3; /*0x1000ead3a*/
  }
  else
  {
    if ( *(_DWORD *)__dst == 3 ) /*0x1000ead04*/
    {
      v18 = *(_QWORD *)&__dst[24]; /*0x1000ead0d*/
      v17 = *(__int64 (__fastcall **)())&__dst[16]; /*0x1000ead1f*/
      v16 = *(_BYTE **)&__dst[8]; /*0x1000ead23*/
      v3 = 0x800000000000000CLL; /*0x1000ead27*/
    }
    else
    {
      v3 = *(_QWORD *)&__dst[8]; /*0x1000ead41*/
      v16 = *(_BYTE **)&__dst[16]; /*0x1000ead4f*/
      v17 = *(__int64 (__fastcall **)())&__dst[24]; /*0x1000ead5a*/
      v18 = *(_QWORD *)&__dst[32]; /*0x1000ead65*/
      memcpy(v9, &__dst[40], sizeof(v9)); /*0x1000ead7c*/
    }
    v10 = v3; /*0x1000ead81*/
    v11 = v16; /*0x1000ead90*/
    v12 = v17; /*0x1000ead97*/
    v13[0] = v18; /*0x1000eada2*/
    memcpy(&v13[1], v9, 0x1C0u); /*0x1000eadbc*/
    v5 = *(_QWORD *)(a2 + 152); /*0x1000eadc1*/
    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v5) ) /*0x1000eadc8*/
      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v5); /*0x1000eadd4*/
    if ( (_DWORD)v2 == 3 )
    {
      *(_QWORD *)&__dst[40] = v13[2]; /*0x1000eadf1*/
      *(_QWORD *)&__dst[32] = v13[1]; /*0x1000eadff*/
      *(_QWORD *)&__dst[24] = v13[0]; /*0x1000eae0d*/
      *(_QWORD *)&__dst[16] = v12; /*0x1000eae1b*/
      *(_QWORD *)&__dst[8] = v11; /*0x1000eae30*/
      *(_QWORD *)__dst = v10; /*0x1000eae37*/
      v16 = __dst; /*0x1000eae3e*/
      v17 = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80; /*0x1000eae49*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        v9,
        "\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs",
        &v16);
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__dst); /*0x1000eae6b*/
      v15[0] = v9[0]; /*0x1000eae7e*/
      v15[1] = v9[1]; /*0x1000eae82*/
      v15[2] = v9[2]; /*0x1000eae8d*/
      v2 = 2; /*0x1000eae91*/
      v6 = v15; /*0x1000eae97*/
    }
    else
    {
      memcpy(v8, v13, sizeof(v8)); /*0x1000eaeb0*/
      v6 = &v10; /*0x1000eaeb5*/
    }
    a1[3] = v6[2]; /*0x1000eaec0*/
    v7 = *v6; /*0x1000eaec4*/
    a1[2] = v6[1]; /*0x1000eaecb*/
    a1[1] = v7; /*0x1000eaecf*/
    *a1 = v2; /*0x1000eaed3*/
    memcpy(a1 + 4, v8, 0x1C8u); /*0x1000eaee9*/
    result = 1; /*0x1000eaeee*/
  }
  *(_BYTE *)(a2 + 160) = result; /*0x1000eaef0*/
  return result; /*0x1000eaef6*/
}