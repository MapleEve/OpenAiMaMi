// __ZN13codexmate_lib4core5relay16codex_diagnostic28check_takeover_backup_orphan @ 0x100507120 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_diagnostic::check_takeover_backup_orphan::h805b70fc7987ba8a(
        __int64 a1,
        __int64 a2,
        char a3)
{
  void *v4; // rcx
  __int64 v5; // r8
  void *result; // rax
  void *v7; // rax
  void *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  void *v13; // rax
  void *v14; // r13

  if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::backup_exists::h42f18c99a961aa37(a2) ) /*0x10050713d*/
  {
    v4 = &unk_1015FDE88; /*0x100507166*/
    v5 = 25; /*0x100507172*/
    return (void *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100507172*/
                     a1,
                     &anon_92869709a5e99ce1936aa4e326b6c562_609,
                     22,
                     v4,
                     v5);
  }
  if ( (a3 & 1) != 0 ) /*0x100507142*/
  {
    v4 = &unk_1015FDF04; /*0x10050714b*/
    v5 = 51; /*0x100507157*/
    return (void *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100507189*/
                     a1,
                     &anon_92869709a5e99ce1936aa4e326b6c562_609,
                     22,
                     v4,
                     v5);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050718e*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x10050719d*/
  if ( !v7 ) /*0x1005071a5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100507318*/
  v8 = v7; /*0x1005071ab*/
  qmemcpy(v7, "takeover_backup_orphan", 22); /*0x1005071d4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1); /*0x1005071d7*/
  v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005071e6*/
  if ( !v9 ) /*0x1005071ee*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100507327*/
  v10 = v9; /*0x1005071f4*/
  *(_DWORD *)((char *)v9 + 3) = 1735289198; /*0x1005071f7*/
  *v9 = 1852989815; /*0x1005071fe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100507204*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x100507213*/
  if ( !v11 ) /*0x10050721b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x100507338*/
  v12 = v11; /*0x100507221*/
  *(_QWORD *)(v11 + 32) = 0x98ADE58DBBE4BDBBLL; /*0x10050722e*/
  *(_QWORD *)(v11 + 24) = 0xE487A4E520726576LL; /*0x10050723d*/
  *(_QWORD *)(v11 + 16) = 0x6F656B61742086BDLL; /*0x10050724c*/
  *(_QWORD *)(v11 + 8) = 0xE4AD97E9B385E5B2LL; /*0x10050725b*/
  *(_QWORD *)v11 = 0xB7E5B194E7AFB7E8LL; /*0x10050726a*/
  *(_DWORD *)(v11 + 39) = -1466112616; /*0x10050726e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(43, 1); /*0x100507277*/
  v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(96, 1); /*0x100507286*/
  if ( !v13 ) /*0x10050728e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 96); /*0x100507349*/
  v14 = v13; /*0x100507294*/
  result = memcpy(v13, &unk_1015FDEA4, 0x60u); /*0x1005072a6*/
  *(_QWORD *)a1 = 22; /*0x1005072ab*/
  *(_QWORD *)(a1 + 8) = v8; /*0x1005072b2*/
  *(_QWORD *)(a1 + 16) = 22; /*0x1005072b6*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1005072be*/
  *(_QWORD *)(a1 + 32) = v10; /*0x1005072c6*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1005072ca*/
  *(_QWORD *)(a1 + 48) = 43; /*0x1005072d2*/
  *(_QWORD *)(a1 + 56) = v12; /*0x1005072da*/
  *(_QWORD *)(a1 + 64) = 43; /*0x1005072de*/
  *(_QWORD *)(a1 + 72) = 96; /*0x1005072e6*/
  *(_QWORD *)(a1 + 80) = v14; /*0x1005072ee*/
  *(_QWORD *)(a1 + 88) = 96; /*0x1005072f2*/
  *(_BYTE *)(a1 + 96) = 1; /*0x1005072fa*/
  return result; /*0x10050717f*/
}