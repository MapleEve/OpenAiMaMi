// mac 1.2.2 NEW set_voice_overlay_style 0x1007a8000 d=2
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfbcde04dea04a030(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007a8010*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1007a801f*/
  if ( !v2 ) /*0x1007a8027*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1007a80d8*/
  v3 = v2; /*0x1007a802d*/
  *v2 = 27503; /*0x1007a8030*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007a8035*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1007a8044*/
  if ( !v4 ) /*0x1007a804c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1007a80e9*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1007a8052*/
  *v4 = 1667462483; /*0x1007a8059*/
  qmemcpy((void *)(a1 + 72), a2, 0x80u); /*0x1007a806b*/
  *(_DWORD *)(a1 + 200) = 1; /*0x1007a806e*/
  *(_BYTE *)(a1 + 204) = 1; /*0x1007a8079*/
  *(_QWORD *)a1 = 2; /*0x1007a8081*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1007a8088*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1007a808c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1007a8094*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1007a809c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1007a80a0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1007a80a8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1007a80b0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1007a80b8*/
  return a1; /*0x1007a80c7*/
}