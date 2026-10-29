// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/io
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::io::PreparedImport::publish::h3d698b6cc7cbc080 @ 0x1003a72d0 size=255 lines=50 =====
_QWORD *__fastcall codexmate_lib::core::relay::io::PreparedImport::publish::h3d698b6cc7cbc080(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  _DWORD v11[34]; // [rsp+8h] [rbp-88h] BYREF

  codexmate_lib::core::relay::keychain::revisions::publish::h4bfff1c269dd80f2(v11, a2 + 4);
  if ( v11[0] == 11 )
  {
    a1[4] = a2[3];
    a1[3] = a2[2];
    v3 = *a2;
    a1[2] = a2[1];
    a1[1] = v3;
    *a1 = 11;
  }
  else
  {
    qmemcpy(a1, v11, 0x60u);
    v4 = a2[1];
    v5 = a2[2];
    if ( v5 )
    {
      v6 = (_QWORD *)(v4 + 56);
      do
      {
        v7 = *(v6 - 7);
        if ( v7 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v6 - 6), v7, 1);
        v8 = *(v6 - 4);
        if ( v8 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v6 - 3), v8, 1);
        v9 = *(v6 - 1);
        if ( v9 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v9, 1);
        v6 += 9;
        --v5;
      }
      while ( v5 );
    }
    if ( *a2 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 72 * *a2, 8);
  }
  return a1;
}

