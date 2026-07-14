// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x100545040 depth=2
_QWORD *__fastcall core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::h6671ec758757b925(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx
  const void *v8; // r15
  size_t v9; // r12
  __int64 v10; // r14
  char v11; // r15
  char v12; // bl
  char v13; // r12
  bool v14; // of
  size_t v15; // r12
  _QWORD *v16; // rbx
  char v17; // r14
  size_t v18; // rcx
  __int128 v20; // [rsp+0h] [rbp-1C0h]
  __int128 v21; // [rsp+10h] [rbp-1B0h]
  size_t __src[21]; // [rsp+20h] [rbp-1A0h] BYREF
  unsigned __int64 v23[3]; // [rsp+C8h] [rbp-F8h] BYREF
  size_t v24; // [rsp+E0h] [rbp-E0h]
  size_t v25; // [rsp+E8h] [rbp-D8h]
  size_t v26[3]; // [rsp+F0h] [rbp-D0h] BYREF
  size_t v27[3]; // [rsp+108h] [rbp-B8h] BYREF
  size_t v28[3]; // [rsp+120h] [rbp-A0h] BYREF
  size_t v29[3]; // [rsp+138h] [rbp-88h] BYREF
  size_t v30[3]; // [rsp+150h] [rbp-70h] BYREF
  size_t v31[3]; // [rsp+168h] [rbp-58h] BYREF
  __int64 v32; // [rsp+180h] [rbp-40h]
  _QWORD *v33; // [rsp+188h] [rbp-38h]
  int v34; // [rsp+190h] [rbp-30h]
  char v35; // [rsp+196h] [rbp-2Ah]
  char v36; // [rsp+197h] [rbp-29h]

  v32 = a3; /*0x100545054*/
  v33 = a1; /*0x100545058*/
  v4 = **a2; /*0x10054505f*/
  v5 = *(_QWORD *)(v4 + 16); /*0x100545062*/
  if ( v5 ) /*0x100545069*/
  {
    v6 = *(_QWORD *)(v4 + 8); /*0x10054506f*/
    v7 = 232 * v5; /*0x100545073*/
    v8 = *(const void **)(a4 + 8); /*0x10054507a*/
    v9 = *(_QWORD *)(a4 + 16); /*0x10054507e*/
    v10 = 0; /*0x100545082*/
    while ( *(_QWORD *)(v6 + v10 + 16) != v9 || memcmp(*(const void **)(v6 + v10 + 8), v8, v9) ) /*0x1005450b9*/
    {
      v10 += 232; /*0x100545090*/
      if ( v7 == v10 ) /*0x10054509a*/
        goto LABEL_8; /*0x10054509a*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v31, v6 + v10); /*0x1005450c4*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v30, v6 + v10 + 24); /*0x1005450d2*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v29, v6 + v10 + 48); /*0x1005450e3*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v28, v6 + v10 + 72); /*0x1005450f4*/
    v11 = *(_BYTE *)(v6 + v10 + 228); /*0x1005450f9*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v27, v6 + v10 + 96); /*0x10054510e*/
    v12 = *(_BYTE *)(v6 + v10 + 230); /*0x100545113*/
    v13 = *(_BYTE *)(v6 + v10 + 231); /*0x10054511c*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(v23, v6 + v10 + 120); /*0x100545131*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, v6 + v10 + 144); /*0x100545145*/
    v34 = *(_DWORD *)(v6 + v10 + 224); /*0x100545152*/
    v20 = *(_OWORD *)(v6 + v10 + 192); /*0x10054515e*/
    v21 = *(_OWORD *)(v6 + v10 + 208); /*0x10054516e*/
    v14 = __OFSUB__(0, *(_QWORD *)(v6 + v10 + 168)); /*0x100545177*/
    v35 = v12; /*0x10054517f*/
    v36 = v13; /*0x100545182*/
    if ( v14 ) /*0x100545186*/
    {
      v15 = 0x8000000000000000LL; /*0x100545188*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v6 + v10 + 168); /*0x1005451ba*/
      v15 = __src[0]; /*0x1005451bf*/
      v24 = __src[1]; /*0x1005451cd*/
      v25 = __src[2]; /*0x1005451db*/
    }
    v17 = *(_BYTE *)(v6 + v10 + 229); /*0x1005451e2*/
    __src[2] = v31[2]; /*0x1005451ef*/
    __src[1] = v31[1]; /*0x1005451fe*/
    __src[0] = v31[0]; /*0x100545205*/
    __src[3] = v30[0]; /*0x100545214*/
    __src[4] = v30[1]; /*0x10054521b*/
    __src[5] = v30[2]; /*0x100545226*/
    __src[6] = v29[0]; /*0x100545238*/
    __src[7] = v29[1]; /*0x10054523f*/
    __src[8] = v29[2]; /*0x10054524a*/
    __src[11] = v28[2]; /*0x100545258*/
    __src[10] = v28[1]; /*0x10054526d*/
    __src[9] = v28[0]; /*0x100545274*/
    __src[14] = v27[2]; /*0x100545282*/
    __src[13] = v27[1]; /*0x100545297*/
    __src[12] = v27[0]; /*0x10054529e*/
    __src[17] = v23[2]; /*0x1005452ac*/
    __src[16] = v23[1]; /*0x1005452c1*/
    __src[15] = v23[0]; /*0x1005452c8*/
    __src[20] = v26[2]; /*0x1005452d6*/
    __src[19] = v26[1]; /*0x1005452eb*/
    __src[18] = v26[0]; /*0x1005452f2*/
    v16 = v33; /*0x1005452f9*/
    *v33 = v32; /*0x100545301*/
    memcpy(v16 + 1, __src, 0xA8u); /*0x100545314*/
    v16[22] = v15; /*0x100545319*/
    v18 = v25; /*0x100545327*/
    v16[23] = v24; /*0x10054532e*/
    v16[24] = v18; /*0x100545335*/
    *(_OWORD *)(v16 + 25) = v20; /*0x100545343*/
    *(_OWORD *)(v16 + 27) = v21; /*0x100545351*/
    *((_DWORD *)v16 + 58) = v34; /*0x10054535b*/
    *((_BYTE *)v16 + 236) = v11; /*0x100545361*/
    *((_BYTE *)v16 + 237) = v17; /*0x100545368*/
    *((_BYTE *)v16 + 238) = v35; /*0x100545373*/
    *((_BYTE *)v16 + 239) = v36; /*0x10054537d*/
  }
  else
  {
LABEL_8:
    v16 = v33; /*0x100545194*/
    v33[1] = 0x8000000000000000LL; /*0x1005451a2*/
  }
  return v16; /*0x100545386*/
}