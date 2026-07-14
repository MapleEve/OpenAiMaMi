// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x1010a80d0 depth=3
// std4path10Components25parse_next_component_back
__int64 __fastcall std::path::Components::parse_next_component_back::h201dfb54389de00e(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  _BYTE *v5; // rax
  _BYTE *v6; // r9
  _BYTE *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r10
  _BYTE *v11; // r11
  bool v12; // zf
  char v13; // r8
  unsigned __int64 v14; // rdx

  if ( *(_BYTE *)(a2 + 56) <= 1u ) /*0x1010a80d8*/
  {
    if ( *(_BYTE *)(a2 + 58) ) /*0x1010a80da*/
      goto LABEL_3; /*0x1010a80de*/
    v4 = *(_QWORD *)(a2 + 8); /*0x1010a8102*/
    if ( v4 ) /*0x1010a8109*/
    {
      v5 = *(_BYTE **)a2; /*0x1010a810b*/
      if ( v4 == 1 ) /*0x1010a8112*/
      {
        if ( *v5 != 46 ) /*0x1010a8117*/
          goto LABEL_11; /*0x1010a8117*/
      }
      else if ( *v5 != 46 || v5[1] != 47 ) /*0x1010a8124*/
      {
        goto LABEL_11; /*0x1010a8124*/
      }
LABEL_3:
      v2 = *(_QWORD *)(a2 + 8); /*0x1010a80e0*/
      result = 1; /*0x1010a80e4*/
      if ( !v2 ) /*0x1010a80ec*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(1u, 0, 0, (__int64)&off_1015AE5A0); /*0x1010a80fd*/
      goto LABEL_12; /*0x1010a80ec*/
    }
  }
LABEL_11:
  v2 = *(_QWORD *)(a2 + 8); /*0x1010a8126*/
  result = 0; /*0x1010a812a*/
LABEL_12:
  v6 = *(_BYTE **)a2; /*0x1010a812c*/
  v7 = (_BYTE *)(*(_QWORD *)a2 + result); /*0x1010a812f*/
  v8 = -1; /*0x1010a8133*/
  v9 = 0; /*0x1010a813a*/
  v10 = result; /*0x1010a813c*/
  while ( v2 != v10 ) /*0x1010a8143*/
  {
    v11 = v6 - 1; /*0x1010a8145*/
    ++v10; /*0x1010a8149*/
    ++v8; /*0x1010a814c*/
    v12 = v6[v2 - 1] == 47; /*0x1010a814f*/
    --v6; /*0x1010a8155*/
    if ( v12 ) /*0x1010a8158*/
    {
      result = v2 - v8; /*0x1010a815d*/
      if ( v2 - v8 > v2 ) /*0x1010a8163*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v2 - v8, v2, v2, (__int64)&off_1015AE588); /*0x1010a81bc*/
      v7 = &v11[v2 + 1]; /*0x1010a8165*/
      v9 = 1; /*0x1010a816a*/
      break; /*0x1010a816a*/
    }
  }
  v13 = 10; /*0x1010a816f*/
  v14 = v2 - result; /*0x1010a8172*/
  if ( v14 ) /*0x1010a8175*/
  {
    if ( v14 == 1 ) /*0x1010a817b*/
    {
      if ( *v7 != 46 ) /*0x1010a8196*/
LABEL_24:
        v13 = 9; /*0x1010a8198*/
    }
    else
    {
      if ( v14 != 2 ) /*0x1010a8181*/
        goto LABEL_24; /*0x1010a8181*/
      if ( *v7 != 46 ) /*0x1010a8186*/
        goto LABEL_24; /*0x1010a8186*/
      v13 = 8; /*0x1010a8188*/
      if ( v7[1] != 46 ) /*0x1010a818f*/
        goto LABEL_24; /*0x1010a818f*/
    }
  }
  *(_QWORD *)a1 = v14 + v9; /*0x1010a819b*/
  *(_BYTE *)(a1 + 8) = v13; /*0x1010a81a1*/
  *(_QWORD *)(a1 + 16) = v7; /*0x1010a81a5*/
  *(_QWORD *)(a1 + 24) = v14; /*0x1010a81a9*/
  return result; /*0x1010a81ad*/
}