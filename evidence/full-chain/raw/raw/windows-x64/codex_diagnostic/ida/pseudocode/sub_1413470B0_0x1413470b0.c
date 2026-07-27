// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1413470b0
// name: sub_1413470B0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
void __fastcall sub_1413470B0(__int128 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r13
  unsigned __int64 *v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r12
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int128 *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 *v21; // rbp
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // r12
  int v25; // eax
  __int128 *v26; // r9
  __int128 *v27; // r11
  __int128 v28; // xmm0
  __int64 v29; // rdi
  __int128 v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // xmm0

  if ( a2 >= 2 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v6 = *((_QWORD *)a1 + 3);
    v7 = *((_QWORD *)a1 + 1);
    v8 = v6 - v7;
    if ( v6 < v7 )
      v7 = *((_QWORD *)a1 + 3);
    v9 = sub_1416847B0(*((_QWORD *)a1 + 2), *(_QWORD *)a1, v7);
    if ( v9 )
      v8 = v9;
    v10 = 2;
    if ( v8 < 0 )
    {
      if ( a2 != 2 )
      {
        v21 = (unsigned __int64 *)a1 + 5;
        while ( 1 )
        {
          v22 = v5;
          v23 = v6;
          v5 = *(v21 - 1);
          v6 = *v21;
          v24 = *v21 - v23;
          if ( *v21 < v23 )
            v23 = *v21;
          v25 = sub_1416847B0(*(v21 - 1), v22, v23);
          if ( v25 )
            v24 = v25;
          if ( v24 >= 0 )
            break;
          ++v10;
          v21 += 2;
          if ( a2 == v10 )
            goto LABEL_18;
        }
      }
    }
    else if ( a2 != 2 )
    {
      v11 = (unsigned __int64 *)a1 + 5;
      while ( 1 )
      {
        v12 = v5;
        v13 = v6;
        v5 = *(v11 - 1);
        v6 = *v11;
        v14 = *v11 - v13;
        if ( *v11 < v13 )
          v13 = *v11;
        v15 = sub_1416847B0(*(v11 - 1), v12, v13);
        if ( v15 )
          v14 = v15;
        if ( v14 < 0 )
          break;
        ++v10;
        v11 += 2;
        if ( a2 == v10 )
          goto LABEL_18;
      }
    }
    if ( v10 != a2 )
    {
      _BitScanReverse64(&v20, a2 | 1);
      sub_14133E1F0((_DWORD)a1, a2, 0, (2 * (v20 ^ 0x3F)) ^ 0x7E, a3);
      return;
    }
LABEL_18:
    if ( v8 >= 0 )
      return;
    v16 = a2 >> 1;
    v17 = a2;
    v18 = &a1[v17];
    if ( v16 == 1 )
    {
      v19 = 0;
LABEL_33:
      v31 = ~v19;
      v32 = v19;
      v31 *= 16;
      v33 = a1[v32];
      a1[v32] = *(__int128 *)((char *)v18 + v31);
      *(__int128 *)((char *)v18 + v31) = v33;
      return;
    }
    v26 = &a1[v17 - 1];
    v19 = 0;
    v27 = a1;
    do
    {
      v28 = *v27;
      *v27 = *v26;
      *v26 = v28;
      v29 = v19 ^ 0xFFFFFFFFFFFFFFELL;
      v30 = v27[1];
      v27[1] = v18[v29];
      v18[v29] = v30;
      v19 += 2;
      v27 += 2;
      v26 -= 2;
    }
    while ( (v16 & 0x3FFFFFFFFFFFFFELL) != v19 );
    if ( (v16 & 1) != 0 )
      goto LABEL_33;
  }
}