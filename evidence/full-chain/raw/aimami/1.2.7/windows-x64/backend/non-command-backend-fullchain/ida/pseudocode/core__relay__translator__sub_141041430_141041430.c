// win 1.2.7 | module src/core/relay/translator.rs | ea 0x141041430 | name sub_141041430
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141041430(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  char v5; // al
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[24]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v14[7]; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]

  v15 = -2;
  if ( !a2 )
    goto LABEL_9;
  if ( *a2 != 4 )
  {
    v4 = sub_1416419F0(aContentItems_1, 13, a2);
    if ( v4 && *(_BYTE *)v4 == 4 )
      goto LABEL_6;
LABEL_9:
    sub_1402FB9D0(a1, a2);
    return a1;
  }
  v4 = (__int64)a2;
LABEL_6:
  sub_1403918C0(v13, *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24));
  v12[0] = 4;
  sub_141041550(a1, v12, aTool_1, 4);
  v5 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 != 0xFF )
  {
    if ( *(_BYTE *)a1 )
    {
      v6 = *(_DWORD *)(a1 + 1);
      *(_DWORD *)&v14[3] = *(_DWORD *)(a1 + 4);
      *(_DWORD *)v14 = v6;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      sub_14002F9D0(a1);
      v8 = 1;
      v5 = 3;
      v7 = 0;
      v9 = 0;
    }
    *(_BYTE *)a1 = v5;
    v10 = *(_DWORD *)&v14[3];
    *(_DWORD *)(a1 + 1) = *(_DWORD *)v14;
    *(_DWORD *)(a1 + 4) = v10;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = v9;
  }
  sub_14002F9D0(v12);
  return a1;
}
