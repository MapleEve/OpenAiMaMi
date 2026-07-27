// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1407d57a0
// name: sub_1407D57A0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407D57A0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // [rsp+20h] [rbp-10h]
  __int64 v5; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 184) >= 0xAu )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( v2 )
      sub_140001660(*(_QWORD *)(a1 + 192), v2, 1);
  }
  if ( *(_BYTE *)(a1 + 96) >= 2u )
  {
    v4 = *(_QWORD **)(a1 + 104);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v4 + 32LL))(v4 + 3, v4[1], v4[2]);
    sub_140001660(v4, 32, 8);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 112) + 32LL))(
    a1 + 136,
    *(_QWORD *)(a1 + 120),
    *(_QWORD *)(a1 + 128));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) + 32LL))(
    a1 + 168,
    *(_QWORD *)(a1 + 152),
    *(_QWORD *)(a1 + 160));
  sub_14034FA40(a1);
  result = a1;
  if ( *(_QWORD *)(a1 + 208) )
  {
    v5 = *(_QWORD *)(a1 + 208);
    sub_14067E8F0();
    return sub_140001660(v5, 32, 8);
  }
  return result;
}