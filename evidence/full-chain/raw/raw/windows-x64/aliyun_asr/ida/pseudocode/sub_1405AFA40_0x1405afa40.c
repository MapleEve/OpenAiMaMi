// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405afa40
// name: sub_1405AFA40
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1405AFA40(__int64 *a1)
{
  __int64 v1; // rsi
  char v2; // al
  char v3; // di
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = _InterlockedOr64((volatile signed __int64 *)(v1 + 48), 4u);
    if ( (v2 & 0xA) == 8 )
    {
      v3 = v2;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 16) + 16LL))(*(_QWORD *)(v1 + 24));
      v2 = v3;
    }
    if ( (v2 & 3) == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), 0xFFFFFFFFFFFFFFFEuLL);
      v4 = v2;
      sub_1412F0A10(v1 + 32);
      v2 = v4;
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(_QWORD *)(v1 + 56);
      v6 = *(_QWORD *)(v1 + 64);
      *(_QWORD *)(v1 + 56) = -2;
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
        sub_140001660(v6, v5, 1);
    }
    if ( *a1 )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) )
        sub_140573FA0(a1);
    }
  }
}