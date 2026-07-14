// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x10049c000 depth=2
// _::drop
char __fastcall _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc534f4fded0edcc2(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  signed __int64 v3; // r14
  __int64 v4; // rcx
  bool v5; // zf
  signed __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  signed __int64 v9; // r14
  unsigned int i; // r15d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // ecx
  int j; // eax

  v1 = *a1; /*0x10049c00e*/
  v2 = (__int64 *)a1[1]; /*0x10049c011*/
  if ( *a1 ) /*0x10049c00e*/
  {
    if ( (_DWORD)v1 == 1 ) /*0x10049c01d*/
    {
      if ( !_InterlockedDecrement64(v2 + 49) ) /*0x10049c023*/
      {
        std::sync::mpmc::list::Channel$LT$T$GT$::disconnect_receivers::hda263e912170feae(v2); /*0x10049c034*/
        LOBYTE(v1) = *((_BYTE *)v2 + 400); /*0x10049c03b*/
        *((_BYTE *)v2 + 400) = 1; /*0x10049c03b*/
        if ( (_BYTE)v1 ) /*0x10049c043*/
        {
          core::ptr::drop_in_place$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..list..Channel$LT$tauri..menu..MenuItemInner$GT$$GT$$GT$::h4d6c69300c4470ee(v2); /*0x10049c04c*/
LABEL_30:
          LOBYTE(v1) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049c1d5*/
        }
      }
    }
    else if ( !_InterlockedDecrement64(v2 + 1) ) /*0x10049c1a4*/
    {
      std::sync::mpmc::zero::Channel$LT$T$GT$::disconnect::hfbf96fa7eb55ba33(v2 + 2); /*0x10049c1b2*/
      LOBYTE(v1) = *((_BYTE *)v2 + 136); /*0x10049c1b9*/
      *((_BYTE *)v2 + 136) = 1; /*0x10049c1b9*/
      if ( (_BYTE)v1 ) /*0x10049c1c1*/
      {
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$std..sync..mpmc..zero..Inner$GT$$GT$::hced957311d92c280(v2 + 2); /*0x10049c1c6*/
        goto LABEL_30; /*0x10049c1c6*/
      }
    }
  }
  else if ( !_InterlockedDecrement64(v2 + 65) ) /*0x10049c060*/
  {
    v3 = v2[16]; /*0x10049c06e*/
    v4 = v2[34]; /*0x10049c075*/
    do /*0x10049c095*/
    {
      v6 = _InterlockedCompareExchange64(v2 + 16, v4 | v3, v3); /*0x10049c089*/
      v5 = v3 == v6; /*0x10049c089*/
      v3 = v6; /*0x10049c092*/
    }
    while ( !v5 ); /*0x10049c095*/
    v7 = v2[34]; /*0x10049c097*/
    if ( (v3 & v7) == 0 ) /*0x10049c0a1*/
    {
      std::sync::mpmc::waker::SyncWaker::disconnect::h2fb0539aab41377f(v2 + 35); /*0x10049c0aa*/
      v7 = v2[34]; /*0x10049c0af*/
    }
    v8 = *v2; /*0x10049c0b6*/
    v9 = ~v7 & v3; /*0x10049c0bf*/
    for ( i = 0; ; ++i ) /*0x10049c0c2*/
    {
      while ( 1 ) /*0x10049c0e5*/
      {
        v11 = v8 & (v7 - 1); /*0x10049c0e5*/
        v12 = -v2[33]; /*0x10049c0f1*/
        v13 = v2[53]; /*0x10049c0f4*/
        v14 = *(_QWORD *)(v13 + 200 * v11 + 192); /*0x10049c102*/
        if ( v8 + 1 != v14 ) /*0x10049c112*/
          break; /*0x10049c112*/
        if ( v11 + 1 >= (unsigned __int64)v2[32] ) /*0x10049c11e*/
          v14 = v2[33] + (v12 & v8); /*0x10049c12a*/
        core::ptr::drop_in_place$LT$tauri..menu..MenuItemInner$GT$::heb211ffbbe49e51c(200 * v11 + v13); /*0x10049c0d3*/
        v7 = v2[34]; /*0x10049c0d8*/
        v8 = v14; /*0x10049c0df*/
      }
      if ( v9 == v8 ) /*0x10049c133*/
        break; /*0x10049c133*/
      if ( i >= 7 ) /*0x10049c13d*/
      {
        std::thread::functions::yield_now::hd3ad5505c790d718(v13); /*0x10049c190*/
      }
      else if ( i ) /*0x10049c142*/
      {
        v15 = i * i; /*0x10049c147*/
        if ( i * i - 1 >= 7 ) /*0x10049c150*/
        {
          v16 = v15 & 0xFFFFFFF8; /*0x10049c154*/
          do /*0x10049c173*/
          {
            _mm_pause(); /*0x10049c160*/
            _mm_pause(); /*0x10049c162*/
            _mm_pause(); /*0x10049c164*/
            _mm_pause(); /*0x10049c166*/
            _mm_pause(); /*0x10049c168*/
            _mm_pause(); /*0x10049c16a*/
            _mm_pause(); /*0x10049c16c*/
            _mm_pause(); /*0x10049c16e*/
            v16 -= 8; /*0x10049c170*/
          }
          while ( v16 ); /*0x10049c173*/
        }
        for ( j = v15 & 5; j; --j ) /*0x10049c178*/
          _mm_pause(); /*0x10049c180*/
      }
      v7 = v2[34]; /*0x10049c198*/
    }
    LOBYTE(v1) = *((_BYTE *)v2 + 528); /*0x10049c1ed*/
    *((_BYTE *)v2 + 528) = 1; /*0x10049c1ed*/
    if ( (_BYTE)v1 ) /*0x10049c1f5*/
      LOBYTE(v1) = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$tauri..menu..PredefinedMenuItemInner$GT$$GT$$GT$$GT$::hed5c5c7bda9bb6f5( /*0x10049c208*/
                     v2,
                     v8 + 1,
                     v12);
  }
  return v1; /*0x10049c1dc*/
}