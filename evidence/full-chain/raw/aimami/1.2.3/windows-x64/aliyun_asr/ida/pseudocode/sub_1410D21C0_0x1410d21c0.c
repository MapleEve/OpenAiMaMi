// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1410d21c0
// name: sub_1410D21C0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1410D21C0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 48);
  if ( v2 )
  {
    v3 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 8LL);
    do
    {
      v4 = *(v3 - 1);
      if ( v4 )
        sub_140001660(*v3, v4, 1);
      v3 += 3;
      --v2;
    }
    while ( v2 );
  }
  v5 = *(_QWORD *)(v1 + 32);
  if ( v5 )
    sub_140001660(*(_QWORD *)(v1 + 40), 24 * v5, 8);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 232)) )
    sub_140573550((__int64 *)(v1 + 232));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 256)) )
    sub_140573550((__int64 *)(v1 + 256));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 272)) )
    sub_140573550((__int64 *)(v1 + 272));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 288)) )
    sub_140573550((__int64 *)(v1 + 288));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 304)) )
    sub_1410D1F30(v1 + 304);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 312)) )
    sub_140573550((__int64 *)(v1 + 312));
  v6 = *(_QWORD *)(v1 + 56);
  if ( v6 )
    sub_140001660(*(_QWORD *)(v1 + 64), 16 * v6, 8);
  v7 = *(_QWORD *)(v1 + 80);
  if ( v7 )
    sub_140001660(*(_QWORD *)(v1 + 88), 16 * v7, 8);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 328)) )
    sub_1410D1FA0(v1 + 328);
  result = *(_QWORD *)(v1 + 104);
  if ( result == -3 )
  {
LABEL_30:
    if ( v1 == -1 )
      return result;
    goto LABEL_33;
  }
  if ( result == -2 )
  {
    v9 = *(_QWORD *)(v1 + 112);
    if ( v9 )
      result = sub_140001660(*(_QWORD *)(v1 + 120), v9, 1);
    goto LABEL_30;
  }
  result = sub_1402C6FA0((__int64 *)(v1 + 104));
  if ( v1 == -1 )
    return result;
LABEL_33:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 360, 8);
  return result;
}