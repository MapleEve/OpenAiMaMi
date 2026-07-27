// __ZN13codexmate_lib4core5relay5quota24detect_official_provider @ 0x1008ae310 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::detect_official_provider::h3e1bed4e6d0516fe(__int64 a1, void *a2)
{
  void *v4; // rsi
  __int64 v5; // rdx
  void *v6; // rdi
  __int64 v7; // r12
  char v8; // r13
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // cl
  char v14; // al
  char v15; // al

  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae339*/
                          &anon_10420c9971c21f44d230d15b39fb3fec_855,
                          0x10u,
                          a2) )
  {
    v4 = &anon_10420c9971c21f44d230d15b39fb3fec_883; /*0x1008ae342*/
    v5 = 17; /*0x1008ae349*/
    v6 = &anon_10420c9971c21f44d230d15b39fb3fec_884; /*0x1008ae34e*/
    v7 = 21; /*0x1008ae355*/
    v8 = 0; /*0x1008ae35b*/
  }
  else
  {
    v4 = &anon_10420c9971c21f44d230d15b39fb3fec_881; /*0x1008ae37a*/
    v6 = &anon_10420c9971c21f44d230d15b39fb3fec_882; /*0x1008ae381*/
    v7 = 20; /*0x1008ae388*/
    v8 = 1; /*0x1008ae38e*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae375*/
                            &anon_10420c9971c21f44d230d15b39fb3fec_856,
                            0xEu,
                            a2) )
    {
      v5 = 16; /*0x1008ae395*/
    }
    else
    {
      v9 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae3b1*/
             &anon_10420c9971c21f44d230d15b39fb3fec_857,
             0xFu,
             a2);
      v6 = &anon_10420c9971c21f44d230d15b39fb3fec_882; /*0x1008ae3b6*/
      v4 = &anon_10420c9971c21f44d230d15b39fb3fec_881; /*0x1008ae3bd*/
      v5 = 16; /*0x1008ae3c6*/
      if ( v9 ) /*0x1008ae3cb*/
        goto LABEL_18; /*0x1008ae3cb*/
      v10 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae3e3*/
              &anon_10420c9971c21f44d230d15b39fb3fec_858,
              0x12u,
              a2);
      v4 = &anon_10420c9971c21f44d230d15b39fb3fec_879; /*0x1008ae3e8*/
      v5 = 20; /*0x1008ae3ef*/
      v6 = &anon_10420c9971c21f44d230d15b39fb3fec_880; /*0x1008ae3f4*/
      v7 = 24; /*0x1008ae3fb*/
      v8 = 2; /*0x1008ae401*/
      if ( v10 ) /*0x1008ae406*/
        goto LABEL_18; /*0x1008ae406*/
      v11 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae421*/
              &anon_10420c9971c21f44d230d15b39fb3fec_859,
              0x13u,
              a2);
      v6 = &anon_10420c9971c21f44d230d15b39fb3fec_880; /*0x1008ae426*/
      v4 = &anon_10420c9971c21f44d230d15b39fb3fec_879; /*0x1008ae42d*/
      v5 = 20; /*0x1008ae430*/
      v8 = 3; /*0x1008ae435*/
      if ( v11 ) /*0x1008ae43a*/
        goto LABEL_18; /*0x1008ae43a*/
      if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae452*/
                              &anon_10420c9971c21f44d230d15b39fb3fec_860,
                              0xDu,
                              a2) )
      {
        v4 = &anon_10420c9971c21f44d230d15b39fb3fec_877; /*0x1008ae45b*/
        v6 = &anon_10420c9971c21f44d230d15b39fb3fec_878; /*0x1008ae462*/
        v8 = 4; /*0x1008ae469*/
      }
      else
      {
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae48e*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_861,
                                0xDu,
                                a2) )
        {
          v4 = &anon_10420c9971c21f44d230d15b39fb3fec_875; /*0x1008ae497*/
          v5 = 15; /*0x1008ae49e*/
          v6 = &anon_10420c9971c21f44d230d15b39fb3fec_876; /*0x1008ae4a3*/
          v7 = 22; /*0x1008ae4aa*/
          v8 = 5; /*0x1008ae4b0*/
          goto LABEL_18; /*0x1008ae4b3*/
        }
        v4 = &anon_10420c9971c21f44d230d15b39fb3fec_873; /*0x1008ae4cf*/
        v6 = &anon_10420c9971c21f44d230d15b39fb3fec_874; /*0x1008ae4d6*/
        v7 = 17; /*0x1008ae4dd*/
        v8 = 6; /*0x1008ae4e3*/
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae4ca*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_862,
                                0xFu,
                                a2) )
        {
          v5 = 13; /*0x1008ae4ea*/
          goto LABEL_18; /*0x1008ae4ef*/
        }
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae51e*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_863,
                                0x11u,
                                a2)
          || (v8 = 7,
              (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &anon_10420c9971c21f44d230d15b39fb3fec_864,
                                 0xFu,
                                 a2)) )
        {
          v5 = 13; /*0x1008ae52a*/
          v4 = &anon_10420c9971c21f44d230d15b39fb3fec_873; /*0x1008ae52f*/
          v6 = &anon_10420c9971c21f44d230d15b39fb3fec_874; /*0x1008ae536*/
          goto LABEL_18; /*0x1008ae536*/
        }
        v14 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae576*/
                &anon_10420c9971c21f44d230d15b39fb3fec_865,
                0x10u,
                a2);
        v5 = 13; /*0x1008ae57d*/
        v4 = &anon_10420c9971c21f44d230d15b39fb3fec_873; /*0x1008ae582*/
        v6 = &anon_10420c9971c21f44d230d15b39fb3fec_874; /*0x1008ae589*/
        if ( v14 ) /*0x1008ae590*/
          goto LABEL_18; /*0x1008ae590*/
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae5a4*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_866,
                                0x13u,
                                a2) )
        {
          v4 = &anon_10420c9971c21f44d230d15b39fb3fec_871; /*0x1008ae5ad*/
          v6 = &anon_10420c9971c21f44d230d15b39fb3fec_872; /*0x1008ae5b4*/
          v7 = 23; /*0x1008ae5bb*/
          v8 = 8; /*0x1008ae5c1*/
          v5 = 16; /*0x1008ae5c4*/
          goto LABEL_18; /*0x1008ae5c9*/
        }
        v4 = &anon_10420c9971c21f44d230d15b39fb3fec_869; /*0x1008ae5e5*/
        v6 = &anon_10420c9971c21f44d230d15b39fb3fec_870; /*0x1008ae5ec*/
        v8 = 9; /*0x1008ae5f3*/
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae5e0*/
                                 &anon_10420c9971c21f44d230d15b39fb3fec_867,
                                 0x10u,
                                 a2) )
        {
          v15 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008ae616*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_868,
                  0xEu,
                  a2);
          v6 = &anon_10420c9971c21f44d230d15b39fb3fec_870; /*0x1008ae61b*/
          v4 = &anon_10420c9971c21f44d230d15b39fb3fec_869; /*0x1008ae61e*/
          v12 = 11; /*0x1008ae621*/
          v8 = 10; /*0x1008ae623*/
          v7 = 25; /*0x1008ae626*/
          v5 = 19; /*0x1008ae62e*/
          if ( !v15 ) /*0x1008ae633*/
            goto LABEL_19; /*0x1008ae633*/
          goto LABEL_18; /*0x1008ae633*/
        }
      }
      v7 = 25; /*0x1008ae46c*/
      v5 = 19; /*0x1008ae472*/
    }
  }
LABEL_18:
  *(_QWORD *)a1 = v4; /*0x1008ae53d*/
  *(_QWORD *)(a1 + 8) = v5; /*0x1008ae540*/
  *(_QWORD *)(a1 + 16) = v6; /*0x1008ae544*/
  *(_QWORD *)(a1 + 24) = v7; /*0x1008ae548*/
  v12 = v8; /*0x1008ae54c*/
LABEL_19:
  *(_BYTE *)(a1 + 32) = v12; /*0x1008ae54f*/
  return a1; /*0x1008ae559*/
}