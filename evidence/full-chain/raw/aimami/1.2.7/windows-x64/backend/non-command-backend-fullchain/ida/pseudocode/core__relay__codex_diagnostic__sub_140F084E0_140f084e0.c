// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f084e0 | name sub_140F084E0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F084E0(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v11; // [rsp+2Fh] [rbp-79h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  const char *v13; // [rsp+38h] [rbp-70h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+80h] [rbp-28h]

  v4 = sub_140F0B6E0(a2);
  if ( !v4 )
  {
LABEL_8:
    *(_BYTE *)(a1 + 8) = v4;
    v6 = -1;
    goto LABEL_9;
  }
  if ( *(_QWORD *)off_1421E6EC0 >= 3u )
  {
    *(_QWORD *)&v17 = 3;
    *((_QWORD *)&v17 + 1) = aCodexmateLibCo_42;
    *(_QWORD *)&v18 = 44;
    *(_QWORD *)&v19 = &unk_141A5CA69;
    *((_QWORD *)&v19 + 1) = 123;
    v12 = 0;
    v13 = aCodexmateLibCo_42;
    v14 = 44;
    v15 = 0;
    *(_QWORD *)&v16 = aSrcCoreRelayCo_3;
    *((_QWORD *)&v16 + 1) = 34;
    *((_QWORD *)&v18 + 1) = 0x2B800000001LL;
    sub_1414D53A0(&v11, &v12);
  }
  sub_140F296A0(&v12, a2, v5);
  v6 = v12;
  v7 = v13;
  v8 = v14;
  if ( v12 == -1 )
  {
    if ( v13 )
      sub_140001660(v14, v13, 1);
    goto LABEL_8;
  }
  v9 = v15;
  *(_OWORD *)(a1 + 80) = v19;
  *(_OWORD *)(a1 + 64) = v18;
  *(_OWORD *)(a1 + 48) = v17;
  *(_OWORD *)(a1 + 32) = v16;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = v9;
LABEL_9:
  *(_QWORD *)a1 = v6;
  return a1;
}
