// mac 1.2.2 NEW set_voice_overlay_style 0x1008de450 d=2
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hb9eb38359947e5a2(
        __int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16); /*0x1008de462*/
  if ( v1 ) /*0x1008de469*/
  {
    v2 = *(_QWORD *)(a1 + 8) + 80LL; /*0x1008de46f*/
    do /*0x1008de487*/
    {
      if ( *(_QWORD *)(v2 - 80) ) /*0x1008de489*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de49d*/
      if ( *(_QWORD *)(v2 - 56) ) /*0x1008de4a2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de4b6*/
      if ( *(_QWORD *)(v2 - 32) ) /*0x1008de4bb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de4cf*/
      if ( *(_QWORD *)(v2 - 8) ) /*0x1008de4d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de4e7*/
      v2 += 112; /*0x1008de480*/
      --v1; /*0x1008de484*/
    }
    while ( v1 ); /*0x1008de487*/
  }
  if ( *(_QWORD *)a1 ) /*0x1008de4ee*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de502*/
  v3 = *(_QWORD *)(a1 + 40); /*0x1008de50b*/
  if ( v3 ) /*0x1008de512*/
  {
    v4 = *(_QWORD *)(a1 + 32); /*0x1008de514*/
    do /*0x1008de532*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::he970c5ab4659cbde(v4); /*0x1008de523*/
      v4 += 160; /*0x1008de528*/
      --v3; /*0x1008de52f*/
    }
    while ( v3 ); /*0x1008de532*/
  }
  if ( *(_QWORD *)(a1 + 24) ) /*0x1008de534*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de54d*/
  v5 = *(_QWORD *)(a1 + 64); /*0x1008de556*/
  if ( v5 ) /*0x1008de55d*/
  {
    v6 = *(_QWORD *)(a1 + 56) + 56LL; /*0x1008de55f*/
    do /*0x1008de577*/
    {
      if ( *(_QWORD *)(v6 - 56) ) /*0x1008de579*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de58d*/
      if ( *(_QWORD *)(v6 - 32) ) /*0x1008de592*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de5a6*/
      if ( *(_QWORD *)(v6 - 8) ) /*0x1008de5ab*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de5be*/
      v6 += 72; /*0x1008de570*/
      --v5; /*0x1008de574*/
    }
    while ( v5 ); /*0x1008de577*/
  }
  if ( *(_QWORD *)(a1 + 48) ) /*0x1008de5c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de5de*/
  v7 = *(_QWORD *)(a1 + 88); /*0x1008de5e7*/
  if ( v7 ) /*0x1008de5ee*/
  {
    v8 = *(_QWORD *)(a1 + 80); /*0x1008de5f0*/
    do /*0x1008de612*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h5331585affe532d1(v8); /*0x1008de603*/
      v8 += 440; /*0x1008de608*/
      --v7; /*0x1008de60f*/
    }
    while ( v7 ); /*0x1008de612*/
  }
  result = *(_QWORD *)(a1 + 72); /*0x1008de614*/
  if ( result ) /*0x1008de61b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008de62c*/
  if ( *(_BYTE *)(a1 + 96) != 6 ) /*0x1008de635*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(a1 + 96); /*0x1008de64f*/
  return result; /*0x1008de637*/
}