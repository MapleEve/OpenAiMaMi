// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1401b1c10 | name sub_1401B1C10
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401B1C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rax
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]
  __int128 v18; // [rsp+38h] [rbp-28h]
  _OWORD *v19; // [rsp+48h] [rbp-18h]
  _OWORD *v20; // [rsp+48h] [rbp-18h]

  result = sub_1416419F0(aCacheControl, 13, a4);
  if ( result )
  {
    v8 = result;
    v9 = (_QWORD *)sub_1416419F0(a2, a3, a1);
    if ( !v9 )
      v9 = off_1421E7108;
    if ( *(_BYTE *)v9 != 2 || v9[1] )
      sub_141939020(&off_1419D6FB0);
    LOBYTE(v17) = 2;
    *(_QWORD *)&v18 = v9[2] + 1LL;
    v19 = (_OWORD *)sub_141641AF0(a2, a3, a1);
    sub_14002F9D0(v19);
    v19[1] = v18;
    *v19 = v17;
    v10 = sub_1416419F0(aType_3, 4, v8);
    v11 = aOther_1;
    v12 = 5;
    if ( v10 && *(_BYTE *)v10 == 3 && *(_QWORD *)(v10 + 24) == 9 )
    {
      v13 = *(_QWORD *)(v10 + 16);
      v14 = _byteswap_uint64(*(_QWORD *)v13);
      v15 = v14 == 0x657068656D657261LL ? *(unsigned __int8 *)(v13 + 8) - 108 : 2 * (v14 >= 0x657068656D657261LL) - 1;
      v12 = 4LL * (v15 == 0) + 5;
      v11 = aOther_1;
      if ( !v15 )
        v11 = aEphemeral;
    }
    v16 = (_QWORD *)sub_1416419F0(v11, v12, a1);
    if ( !v16 )
      v16 = off_1421E7108;
    if ( *(_BYTE *)v16 != 2 || v16[1] )
      sub_141939020(&off_1419D6F98);
    LOBYTE(v17) = 2;
    *(_QWORD *)&v18 = v16[2] + 1LL;
    v20 = (_OWORD *)sub_141641AF0(v11, v12, a1);
    sub_14002F9D0(v20);
    result = (__int64)v20;
    v20[1] = v18;
    *v20 = v17;
  }
  return result;
}
