// 【中文证据注释】codexmate_lib::core::relay::translator 模块函数，win 侧命名前为 sub_140A623C0。作用：Anthropic 【完整(非流式)】Messages API 响应 -> Codex/OpenAI Responses 风格完整响应对象转换器。主循环遍历响应 content 数组，按每个 block 的 type 字段分派(case 4字节'text'->output_text项；case 8字节'tool_use'->function_call项(id/name/input/call_id)；case 15字节'web_search_call'的特化name='web_search'->web_search_call项；case 8字节'thinking'或17字节'redacted_thinking'->归入同一段逻辑：构造 {type:reasoning,status:completed,summary:[...]} 输出项，并调用 set_anthropic_thinking_carrier(0x140a28fb0，本函数内调用2次，对应 thinking 与 redacted_thinking 两条路径)把签名/数据序列化+base64+私有前缀封装进 encrypted_content)。循环结束后追加顶层字段：usage(input_tokens/output_tokens/total_tokens，来自 usage.input_tokens+cache_read_input_tokens+cache_creation_input_tokens 之和)、sta
__int64 __fastcall translate_anthropic_response_to_output_items(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  const __m128i *v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  __m128i si128; // xmm7
  __m128i v21; // xmm8
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _WORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r15
  const char *v68; // r14
  __int64 v69; // rax
  const __m128i *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r15
  const char *v83; // r14
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rsi
  const __m128i *v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r14
  __int64 v106; // r15
  _BYTE *v107; // rax
  __int64 v108; // rsi
  _QWORD *v109; // rsi
  _WORD *v110; // rax
  __int64 v111; // rax
  bool v112; // zf
  __int64 v113; // rdx
  unsigned __int64 v114; // rax
  __m128i v115; // xmm0
  __m128i v116; // xmm9
  __int64 i; // r14
  unsigned __int64 v118; // rax
  __m128i v120; // xmm10
  unsigned __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // eax
  __int64 v128; // r15
  __int64 v129; // r14
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  _DWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  _QWORD *v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  _WORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rsi
  __int64 v150; // rax
  __int64 v151; // r13
  _DWORD *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __m128i *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  _WORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int128 v167; // kr60_16
  __int64 v168; // rsi
  __int64 v169; // rax
  __int64 v170; // r15
  _DWORD *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __m128i *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  _WORD *v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int128 v186; // kr70_16
  __int64 v187; // rsi
  __int64 v188; // rax
  __int64 v189; // r15
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  _DWORD *v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // r15
  __int64 v200; // r13
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  _DWORD *v206; // rax
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // rsi
  __int64 v212; // rax
  __int64 v213; // r15
  _DWORD *v214; // rax
  __m128i v215; // xmm0
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  _DWORD *v220; // rax
  __m128i v221; // xmm0
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  _WORD *v226; // rax
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rdx
  _DWORD *v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  _DWORD *v241; // rax
  __int8 v242; // si
  __m128i v243; // xmm1
  _DWORD *v244; // rax
  __m128i v245; // xmm0
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  _QWORD *v250; // rax
  __m128i v251; // xmm0
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rax
  __m128i v257; // xmm0
  __int64 v258; // rdx
  __int64 v259; // r8
  __int64 v260; // r9
  _WORD *v261; // rax
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rdx
  _DWORD *v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 v271; // rax
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  _DWORD *v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  _DWORD *v281; // r15
  __int64 v282; // rcx
  __int64 v283; // rax
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  _DWORD *v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  _DWORD *v293; // rax
  __m128i v294; // xmm1
  __m128i v295; // xmm1
  __m128i *v296; // rsi
  __int64 v297; // rax
  __int64 v298; // rcx
  __m128i v299; // xmm0
  __m128i v300; // xmm1
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  _BYTE *v304; // rdx
  __int64 v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rax
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rdx
  _DWORD *v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // r15
  __int64 v321; // r14
  __int64 v322; // rax
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  _DWORD *v327; // rax
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __int64 v332; // r14
  __int64 v333; // r15
  __int64 v334; // rax
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rax
  _BYTE *v340; // rax
  __m128i v341; // xmm0
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rax
  __int64 v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // r9
  __int64 v351; // rax
  unsigned __int64 v352; // rsi
  __int64 v353; // rdx
  __int64 v354; // rcx
  __int64 v355; // r8
  __int64 v356; // r9
  __int64 v357; // rax
  __int64 v358; // rdx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 v361; // rsi
  __int64 v362; // rax
  __int64 v363; // r15
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rdx
  _DWORD *v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // r15
  __int64 v374; // r14
  __int64 v375; // rax
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 v379; // r9
  __int64 v380; // rax
  __int64 v381; // rdx
  __int64 v382; // rcx
  __int64 v383; // r8
  __int64 v384; // r9
  __int64 v385; // rax
  __int64 v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  __int64 v390; // rax
  __int64 v391; // rdx
  __int64 v392; // r8
  __int64 v393; // r9
  __int64 v394; // rax
  __int64 v395; // rdx
  __int64 v396; // rcx
  __int64 v397; // r8
  __int64 v398; // r9
  __int64 v399; // rax
  __m128i v400; // xmm0
  __int64 v401; // rax
  __int64 v402; // rcx
  __int64 v403; // rax
  __int64 v404; // rcx
  __m128i v405; // xmm0
  __int64 v406; // rsi
  __int64 v407; // rdx
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  __int64 v411; // rax
  __int64 v412; // rdx
  __int64 v413; // rcx
  __int64 v414; // r8
  __int64 v415; // r9
  __int64 v416; // rax
  __m128i v417; // xmm0
  unsigned __int64 v418; // rsi
  __int64 v419; // rax
  __int64 v420; // rcx
  __m128i v421; // xmm0
  __int64 v422; // rdx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rcx
  __int64 v426; // rsi
  __int64 v427; // rbx
  __int64 v428; // r14
  char v429; // r12
  _DWORD *v430; // rax
  __int64 v431; // rdx
  __int64 v432; // rcx
  __int64 v433; // r8
  __int64 v434; // r9
  _DWORD *v435; // rax
  __int64 v436; // rdx
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  _WORD *v440; // rax
  __int64 v441; // rdx
  __int64 v442; // rcx
  __int64 v443; // r8
  __int64 v444; // r9
  __int64 v445; // r14
  __int64 v446; // rsi
  __int64 v447; // rax
  __int64 v448; // r15
  __int64 v449; // rdx
  __int64 v450; // rcx
  __int64 v451; // r8
  __int64 v452; // r9
  _BYTE *v453; // rdx
  _DWORD *v454; // rax
  __int64 v455; // rdx
  __int64 v456; // rcx
  __int64 v457; // r8
  __int64 v458; // r9
  __int64 v459; // rax
  __int64 v460; // rdx
  __int64 v461; // rcx
  __int64 v462; // r8
  __int64 v463; // r9
  __int64 v464; // rax
  __int64 v465; // rdx
  __int64 v466; // rcx
  __int64 v467; // r8
  __int64 v468; // r9
  __int64 v469; // rax
  __int64 v470; // rdx
  __int64 v471; // rcx
  __int64 v472; // r8
  __int64 v473; // r9
  _DWORD *v474; // rax
  __int64 v475; // rdx
  __int64 v476; // rcx
  __int64 v477; // r8
  __int64 v478; // r9
  __int64 v479; // rax
  __int64 v480; // rdx
  __int64 v481; // rcx
  __int64 v482; // r8
  __int64 v483; // r9
  _BYTE *v484; // rsi
  _DWORD *v485; // rax
  __int64 v486; // rdx
  __int64 v487; // rcx
  __int64 v488; // r8
  __int64 v489; // r9
  void *v490; // rax
  __int64 v491; // rdx
  __int64 v492; // rcx
  __int64 v493; // r8
  __int64 v494; // r9
  _DWORD *v495; // rax
  __int64 v496; // rdx
  __int64 v497; // rcx
  __int64 v498; // r8
  __int64 v499; // r9
  __int64 v500; // rsi
  __int64 v501; // r14
  __int64 v502; // rax
  __int64 v503; // rdx
  __int64 v504; // rcx
  __int64 v505; // r8
  __int64 v506; // r9
  void *v507; // rax
  __int64 v508; // rcx
  __m128i v509; // xmm0
  __m128i *v510; // rsi
  __int64 v511; // rax
  __int64 v512; // rcx
  __m128i v513; // xmm0
  __int64 v514; // rbx
  __int64 v515; // r14
  unsigned __int64 v516; // r15
  __int64 v517; // r12
  __m128i *v518; // r13
  __int64 v519; // rsi
  _QWORD *v520; // rbx
  __int64 v521; // rdx
  __int64 v522; // rax
  __int64 v523; // rbx
  __int64 v524; // rax
  __int64 v525; // rcx
  __int64 v526; // r14
  __int64 v527; // rax
  __int64 v528; // rcx
  __int64 v529; // rsi
  __int64 v530; // rax
  __int64 v531; // rcx
  __int64 v532; // r15
  __int64 v533; // rax
  __int64 v534; // rdx
  __int64 v535; // rcx
  __int64 v536; // r8
  __int64 v537; // r9
  unsigned __int64 v538; // rbx
  void *v539; // rax
  unsigned __int64 v540; // rsi
  __int64 v541; // rdx
  __int64 v542; // rcx
  __int64 v543; // r8
  __int64 v544; // r9
  void *v545; // rax
  __int64 v546; // rdx
  __int64 v547; // rcx
  __int64 v548; // r8
  __int64 v549; // r9
  void *v550; // rax
  unsigned __int64 v551; // rbx
  __int64 v552; // rax
  __int64 v553; // rdx
  __int64 v554; // rcx
  __int64 v555; // r8
  __int64 v556; // r9
  char v557; // di
  __int64 v558; // r15
  const char *v559; // r12
  __int64 v560; // rax
  const char *v561; // rsi
  int v562; // eax
  _WORD *v563; // rax
  __int64 v564; // rdx
  __int64 v565; // rcx
  __int64 v566; // r8
  __int64 v567; // r9
  __int64 v568; // r13
  __int64 v569; // r14
  __int64 v570; // rbx
  __int64 v571; // rax
  __int64 v572; // rsi
  __int64 v573; // rdx
  __int64 v574; // rcx
  __int64 v575; // r8
  __int64 v576; // r9
  __int64 v577; // rax
  __int64 v578; // rdx
  __int64 v579; // rcx
  __int64 v580; // r8
  __int64 v581; // r9
  _QWORD *v582; // rax
  __int64 v583; // rdx
  __int64 v584; // rcx
  __int64 v585; // r8
  __int64 v586; // r9
  void *v587; // rax
  __int32 v588; // edx
  int v589; // ecx
  unsigned __int32 v590; // ecx
  __int64 v591; // rdx
  __int64 v592; // rcx
  __int64 v593; // r8
  __int64 v594; // r9
  __int64 v595; // rax
  __int64 v596; // rdx
  __int64 v597; // rcx
  __int64 v598; // r8
  __int64 v599; // r9
  __int64 v600; // rax
  __int64 v601; // rsi
  __int64 v602; // rdx
  __int64 v603; // rcx
  __int64 v604; // r8
  __int64 v605; // r9
  __int64 v606; // r15
  __int64 v607; // rax
  __int64 v608; // rdx
  __int64 v609; // rcx
  __int64 v610; // r8
  __int64 v611; // r9
  __int64 v612; // rsi
  __int64 v613; // rax
  __int64 v614; // rdx
  __int64 v615; // rcx
  __int64 v616; // r8
  __int64 v617; // r9
  __int64 v618; // rax
  __m128i v619; // xmm0
  __int64 v620; // rdx
  __int64 v621; // rcx
  __int64 v622; // r8
  __int64 v623; // r9
  void *v624; // rax
  __int64 v625; // rdx
  __int64 v626; // r8
  __int64 v627; // r9
  __int64 v628; // r12
  __int64 v629; // r14
  __int64 v630; // r15
  __int64 v631; // rax
  __int64 v632; // rsi
  __int64 v633; // rdx
  __int64 v634; // rcx
  __int64 v635; // r8
  __int64 v636; // r9
  __int64 v637; // rax
  __m128i v638; // xmm0
  __int64 v639; // rdx
  __int64 v640; // rcx
  __int64 v641; // r8
  __int64 v642; // r9
  __int64 v643; // rax
  __int64 v644; // rdx
  __int64 v645; // rcx
  __int64 v646; // r8
  __int64 v647; // r9
  __int128 v648; // rdi
  __int64 v649; // rax
  __m128i v650; // xmm0
  __m128i *v651; // rax
  __int8 v652; // al
  __int64 v653; // rcx
  int v654; // edx
  __int16 v655; // r8
  __int8 v656; // r9
  __int64 v657; // r11
  __int64 v658; // rcx
  __int64 v659; // rsi
  __int64 v661; // rax
  __int64 v662; // rax
  __int64 v663; // rax
  __int64 v664; // rax
  __int64 v665; // [rsp+20h] [rbp-60h]
  __int64 v666; // [rsp+20h] [rbp-60h]
  __int64 v667; // [rsp+20h] [rbp-60h]
  __int64 v668; // [rsp+20h] [rbp-60h]
  __int64 v669; // [rsp+20h] [rbp-60h]
  __int64 v670; // [rsp+20h] [rbp-60h]
  __int64 v671; // [rsp+20h] [rbp-60h]
  __int64 v672; // [rsp+20h] [rbp-60h]
  __int64 v673; // [rsp+20h] [rbp-60h]
  __int64 v674; // [rsp+20h] [rbp-60h]
  __int64 v675; // [rsp+20h] [rbp-60h]
  __int64 v676; // [rsp+20h] [rbp-60h]
  __int64 v677; // [rsp+20h] [rbp-60h]
  __int64 v678; // [rsp+20h] [rbp-60h]
  __int64 v679; // [rsp+20h] [rbp-60h]
  __int64 v680; // [rsp+20h] [rbp-60h]
  __int64 v681; // [rsp+20h] [rbp-60h]
  __int64 v682; // [rsp+20h] [rbp-60h]
  __int64 v683; // [rsp+20h] [rbp-60h]
  __int64 v684; // [rsp+20h] [rbp-60h]
  __int64 v685; // [rsp+20h] [rbp-60h]
  __int64 v686; // [rsp+20h] [rbp-60h]
  __int64 v687; // [rsp+20h] [rbp-60h]
  __int64 v688; // [rsp+20h] [rbp-60h]
  __int64 v689; // [rsp+20h] [rbp-60h]
  __int64 v690; // [rsp+20h] [rbp-60h]
  __int64 v691; // [rsp+20h] [rbp-60h]
  __int64 v692; // [rsp+20h] [rbp-60h]
  __int64 v693; // [rsp+20h] [rbp-60h]
  __int64 v694; // [rsp+20h] [rbp-60h]
  __int64 v695; // [rsp+20h] [rbp-60h]
  __int64 v696; // [rsp+20h] [rbp-60h]
  __int64 v697; // [rsp+20h] [rbp-60h]
  __int64 v698; // [rsp+20h] [rbp-60h]
  __int64 v699; // [rsp+20h] [rbp-60h]
  __int64 v700; // [rsp+20h] [rbp-60h]
  __int64 v701; // [rsp+20h] [rbp-60h]
  __int64 v702; // [rsp+20h] [rbp-60h]
  __int64 v703; // [rsp+20h] [rbp-60h]
  __int64 v704; // [rsp+20h] [rbp-60h]
  __int64 v705; // [rsp+20h] [rbp-60h]
  __int64 v706; // [rsp+20h] [rbp-60h]
  __int64 v707; // [rsp+20h] [rbp-60h]
  __int64 v708; // [rsp+20h] [rbp-60h]
  __int64 v709; // [rsp+20h] [rbp-60h]
  __int64 v710; // [rsp+20h] [rbp-60h]
  __int64 v711; // [rsp+20h] [rbp-60h]
  __int64 v712; // [rsp+20h] [rbp-60h]
  __int64 v713; // [rsp+20h] [rbp-60h]
  __int64 v714; // [rsp+20h] [rbp-60h]
  __int64 v715; // [rsp+20h] [rbp-60h]
  __int64 v716; // [rsp+20h] [rbp-60h]
  __int64 v717; // [rsp+20h] [rbp-60h]
  __int64 v718; // [rsp+20h] [rbp-60h]
  __int64 v719; // [rsp+20h] [rbp-60h]
  __int64 v720; // [rsp+20h] [rbp-60h]
  __int64 v721; // [rsp+20h] [rbp-60h]
  __int64 v722; // [rsp+20h] [rbp-60h]
  __int64 v723; // [rsp+20h] [rbp-60h]
  __int64 v724; // [rsp+20h] [rbp-60h]
  __int64 v725; // [rsp+20h] [rbp-60h]
  __int64 v726; // [rsp+20h] [rbp-60h]
  __int64 v727; // [rsp+20h] [rbp-60h]
  __int64 v728; // [rsp+20h] [rbp-60h]
  __int64 v729; // [rsp+20h] [rbp-60h]
  __int64 v730; // [rsp+20h] [rbp-60h]
  __int64 v731; // [rsp+20h] [rbp-60h]
  _QWORD v732[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v733; // [rsp+60h] [rbp-20h]
  _QWORD v734[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v735; // [rsp+78h] [rbp-8h]
  __int64 v736; // [rsp+80h] [rbp+0h] BYREF
  __int64 v737; // [rsp+88h] [rbp+8h]
  __int64 v738; // [rsp+90h] [rbp+10h]
  __int64 v739; // [rsp+98h] [rbp+18h]
  __int64 v740; // [rsp+A0h] [rbp+20h]
  __int64 v741; // [rsp+A8h] [rbp+28h]
  __int64 v742; // [rsp+B0h] [rbp+30h]
  __int64 v743; // [rsp+B8h] [rbp+38h]
  __int128 v744; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v745; // [rsp+D0h] [rbp+50h]
  __int64 v746; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v747; // [rsp+E0h] [rbp+60h]
  __int64 v748; // [rsp+E8h] [rbp+68h]
  __int64 v749; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v750; // [rsp+F8h] [rbp+78h]
  __int64 v751; // [rsp+100h] [rbp+80h]
  __int64 v752; // [rsp+108h] [rbp+88h]
  __int64 v753; // [rsp+110h] [rbp+90h]
  __int64 v754; // [rsp+118h] [rbp+98h]
  __int64 v755; // [rsp+120h] [rbp+A0h]
  __int64 v756; // [rsp+128h] [rbp+A8h]
  __m128i v757; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v758; // [rsp+140h] [rbp+C0h]
  __int64 v759; // [rsp+148h] [rbp+C8h]
  __int64 v760; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v761; // [rsp+158h] [rbp+D8h]
  unsigned __int64 v762; // [rsp+160h] [rbp+E0h]
  __m128i *v763; // [rsp+168h] [rbp+E8h]
  __int64 v764; // [rsp+170h] [rbp+F0h]
  _QWORD *v765; // [rsp+178h] [rbp+F8h]
  _QWORD *v766; // [rsp+180h] [rbp+100h]
  __int64 v767; // [rsp+188h] [rbp+108h]
  __m128i *v768; // [rsp+190h] [rbp+110h] BYREF
  __int64 v769; // [rsp+198h] [rbp+118h]
  __m128i *v770; // [rsp+1A0h] [rbp+120h]
  __m128i v771; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v772; // [rsp+1B8h] [rbp+138h]
  __int64 v773; // [rsp+1C0h] [rbp+140h]
  __m128i *v774; // [rsp+1C8h] [rbp+148h]
  char v775; // [rsp+1D7h] [rbp+157h] BYREF
  __int64 v776; // [rsp+1D8h] [rbp+158h]
  __int64 v777; // [rsp+1E0h] [rbp+160h]
  __int64 v778; // [rsp+1E8h] [rbp+168h]
  __m256i v779; // [rsp+1F0h] [rbp+170h] BYREF
  _BYTE *v780; // [rsp+210h] [rbp+190h]
  char v781; // [rsp+21Fh] [rbp+19Fh]
  char v782; // [rsp+220h] [rbp+1A0h]
  char v783; // [rsp+221h] [rbp+1A1h]
  char v784; // [rsp+222h] [rbp+1A2h]
  char v785; // [rsp+223h] [rbp+1A3h]
  char v786; // [rsp+224h] [rbp+1A4h]
  char v787; // [rsp+225h] [rbp+1A5h]
  char v788; // [rsp+226h] [rbp+1A6h]
  char v789; // [rsp+227h] [rbp+1A7h]
  char v790; // [rsp+228h] [rbp+1A8h]
  char v791; // [rsp+229h] [rbp+1A9h]
  char v792; // [rsp+22Ah] [rbp+1AAh]
  char v793; // [rsp+22Bh] [rbp+1ABh]
  char v794; // [rsp+22Ch] [rbp+1ACh]
  char v795; // [rsp+22Dh] [rbp+1ADh]
  char v796; // [rsp+22Eh] [rbp+1AEh]
  char v797; // [rsp+22Fh] [rbp+1AFh]
  __m256i v798; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v799; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v800; // [rsp+260h] [rbp+1E0h]
  _BYTE *v801; // [rsp+270h] [rbp+1F0h]
  char v802; // [rsp+27Ch] [rbp+1FCh]
  char v803; // [rsp+27Dh] [rbp+1FDh]
  char v804; // [rsp+27Eh] [rbp+1FEh]
  char v805; // [rsp+27Fh] [rbp+1FFh]
  char v806; // [rsp+280h] [rbp+200h]
  char v807; // [rsp+281h] [rbp+201h]
  char v808; // [rsp+282h] [rbp+202h]
  char v809; // [rsp+283h] [rbp+203h]
  char v810; // [rsp+284h] [rbp+204h]
  char v811; // [rsp+285h] [rbp+205h]
  char v812; // [rsp+286h] [rbp+206h]
  char v813; // [rsp+287h] [rbp+207h]
  char v814; // [rsp+288h] [rbp+208h]
  char v815; // [rsp+289h] [rbp+209h]
  char v816; // [rsp+28Ah] [rbp+20Ah]
  char v817; // [rsp+28Bh] [rbp+20Bh]
  char v818; // [rsp+28Ch] [rbp+20Ch]
  char v819; // [rsp+28Dh] [rbp+20Dh]
  char v820; // [rsp+28Eh] [rbp+20Eh]
  char v821; // [rsp+28Fh] [rbp+20Fh]
  __m256i v822; // [rsp+290h] [rbp+210h] BYREF
  __int64 v823; // [rsp+2B0h] [rbp+230h]
  __int64 v824; // [rsp+2B8h] [rbp+238h]
  __m128i v825; // [rsp+2C0h] [rbp+240h]
  __int64 v826; // [rsp+2D0h] [rbp+250h]
  __m256i v827; // [rsp+2E0h] [rbp+260h] BYREF
  __m256i v828; // [rsp+300h] [rbp+280h] BYREF
  char v829; // [rsp+327h] [rbp+2A7h]
  __int64 v830; // [rsp+328h] [rbp+2A8h]

  v830 = -2;
  v774 = a3;
  v738 = a1;
  v6 = (const __m128i *)sub_1414D4800(aId_7, 2, a2);
  if ( v6 && v6->m128i_i8[0] == 3 )
  {
    *(__m128i *)v827.m256i_i8 = _mm_loadu_si128(v6 + 1);
    v822.m256i_i64[0] = (__int64)&v827;
    v7 = sub_1402DDC10;
  }
  else
  {
    sub_1413FD8E0(&v827);
    v822.m256i_i64[0] = (__int64)&v827;
    v7 = sub_140512940;
  }
  v822.m256i_i64[1] = (__int64)v7;
  sub_141543AF0(v734, &unk_14185129F, &v822);
  v8 = sub_1414D4800(aModel_5, 5, a2);
  v13 = aUnknown_4;
  v14 = 7;
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v14 = *(_QWORD *)(v8 + 24);
    if ( v14 < 0 )
    {
      v15 = 0;
      goto LABEL_9;
    }
    if ( !v14 )
    {
      v752 = 1;
      LODWORD(v763) = 1;
      v756 = 0;
      goto LABEL_14;
    }
    v13 = *(const char **)(v8 + 16);
  }
  nullsub_1(v10, v9, v11, v12, v665);
  v15 = 1;
  v16 = sub_140001650(v14, 1);
  if ( !v16 )
  {
    v9 = v14;
LABEL_9:
    sub_14176E54B(v15, v9);
  }
  v752 = v16;
  v756 = v14;
  sub_14172B820(v16, v13, v14);
  LODWORD(v763) = 0;
LABEL_14:
  v768 = nullptr;
  v769 = 8;
  v770 = nullptr;
  v746 = 0;
  v747 = 1;
  v748 = 0;
  v17 = sub_1414D4800(
          "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokensstre"
          "amdoubaoreasoning_effortnone",
          7,
          a2);
  if ( !v17 || *(_BYTE *)v17 != 4 )
    goto LABEL_406;
  v749 = 0;
  v750 = 8;
  v751 = 0;
  v760 = 0;
  v761 = 8;
  v762 = 0;
  v18 = *(_QWORD *)(v17 + 16);
  v19 = v18 + 32LL * *(_QWORD *)(v17 + 24);
  v759 = *(_QWORD *)(a4 + 24);
  v733 = a4 + 32;
  v780 = *(_BYTE **)a4;
  v773 = *(_QWORD *)(a4 + 8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_141801AA0);
  v21 = _mm_cvtsi32_si128(0x67u);
  while ( v18 != v19 )
  {
    v22 = v18;
    v829 = 1;
    v23 = sub_1414D4800(aType_8, 4, v18);
    v18 += 32;
    if ( v23 && *(_BYTE *)v23 == 3 )
    {
      v24 = *(_QWORD *)(v23 + 24);
      v25 = *(_QWORD *)(v23 + 16);
      switch ( v24 )
      {
        case 4LL:
          if ( *(_DWORD *)v25 != 1954047348 )
            continue;
          v829 = 1;
          v26 = sub_1414D4800(aText_9, 4, v22);
          if ( !v26 )
            continue;
          LOBYTE(v28) = *(_BYTE *)v26 != 3;
          v31 = *(_QWORD *)(v26 + 24);
          if ( (unsigned __int8)v28 | (v31 == 0) )
            continue;
          if ( v31 < 0 )
          {
            v33 = 0;
            goto LABEL_533;
          }
          v32 = *(_QWORD *)(v26 + 16);
          LOBYTE(v27) = v28 | (v31 == 0);
          nullsub_1(v28, v27, v29, v30, v665);
          v33 = 1;
          v34 = sub_140001650(v31, 1);
          if ( !v34 )
          {
            v754 = v31;
LABEL_533:
            v829 = 1;
            sub_14176E54B(v33, v754);
          }
          v754 = v34;
          v801 = (_BYTE *)v31;
          sub_14172B820(v34, v32, v31);
          v35 = v751;
          if ( v751 == v749 )
            sub_14172D430(&v749);
          v36 = v750;
          v37 = 3 * v35;
          v38 = v801;
          *(_QWORD *)(v750 + 8 * v37) = v801;
          *(_QWORD *)(v36 + 8 * v37 + 8) = v754;
          *(_QWORD *)(v36 + 8 * v37 + 16) = v38;
          v751 = v35 + 1;
          continue;
        case 8LL:
          if ( *(_QWORD *)v25 == 0x676E696B6E696874LL )
            goto LABEL_52;
          if ( *(_QWORD *)v25 != 0x6573755F6C6F6F74LL )
            continue;
          v829 = 1;
          v62 = sub_1414D4800(aId_7, 2, v22);
          v67 = 12;
          if ( v62 )
          {
            v68 = aCallUnknown;
            if ( *(_BYTE *)v62 == 3 )
            {
              v67 = *(_QWORD *)(v62 + 24);
              if ( v67 < 0 )
              {
                v75 = 0;
                v449 = v764;
                goto LABEL_356;
              }
              if ( !v67 )
              {
                v764 = 1;
                LODWORD(v777) = 1;
                v776 = 0;
                goto LABEL_63;
              }
              v68 = *(const char **)(v62 + 16);
            }
          }
          else
          {
            v68 = aCallUnknown;
          }
          nullsub_1(v64, v63, v65, v66, v665);
          v75 = 1;
          v76 = sub_140001650(v67, 1);
          if ( !v76 )
          {
            v449 = v67;
LABEL_356:
            v829 = 1;
            sub_14176E54B(v75, v449);
          }
          v764 = v76;
          v776 = v67;
          sub_14172B820(v76, v68, v67);
          LODWORD(v777) = 0;
LABEL_63:
          v77 = sub_1414D4800(aName_7, 4, v22);
          v82 = 4;
          if ( v77 )
          {
            v83 = aTool;
            if ( *(_BYTE *)v77 == 3 )
            {
              v82 = *(_QWORD *)(v77 + 24);
              if ( v82 < 0 )
              {
                v90 = 0;
                goto LABEL_535;
              }
              if ( !v82 )
              {
                v92 = 1;
                LOBYTE(v77) = 1;
                LODWORD(v778) = v77;
                v82 = 0;
                goto LABEL_75;
              }
              v83 = *(const char **)(v77 + 16);
            }
          }
          else
          {
            v83 = aTool;
          }
          nullsub_1(v79, v78, v80, v81, v665);
          v90 = 1;
          v91 = sub_140001650(v82, 1);
          if ( !v91 )
          {
            v765 = (_QWORD *)v82;
LABEL_535:
            sub_14176E54B(v90, v765);
          }
          v92 = v91;
          sub_14172B820(v91, v83, v82);
          LODWORD(v778) = 0;
LABEL_75:
          *(_QWORD *)&v744 = v82;
          v765 = (_QWORD *)v92;
          *((_QWORD *)&v744 + 1) = v92;
          v801 = (_BYTE *)v82;
          v745 = v82;
          v93 = (const __m128i *)sub_1414D4800(aInput_3, 5, v22);
          if ( v93 )
          {
            switch ( v93->m128i_i8[0] )
            {
              case 0:
                v822.m256i_i8[0] = 0;
                break;
              case 1:
              case 2:
                v94 = _mm_loadu_si128(v93);
                *(__m128i *)&v822.m256i_u64[2] = _mm_loadu_si128(v93 + 1);
                *(__m128i *)v822.m256i_i8 = v94;
                break;
              case 3:
                sub_141543F00(&v822.m256i_u64[1], &v93->m128i_u64[1]);
                v822.m256i_i8[0] = 3;
                break;
              case 4:
                sub_140465C50(&v822.m256i_u64[1], &v93->m128i_u64[1]);
                v822.m256i_i8[0] = 4;
                break;
              case 5:
                sub_1401A7FA0(&v822.m256i_u64[1], &v93->m128i_u64[1]);
                v822.m256i_i8[0] = 5;
                break;
            }
            *(__m128i *)&v779.m256i_u64[2] = _mm_load_si128((const __m128i *)&v822.m256i_u64[2]);
            v779.m256i_i8[0] = v822.m256i_i8[0];
            *(__int64 *)((char *)v779.m256i_i64 + 1) = *(__int64 *)((char *)v822.m256i_i64 + 1);
            *(__int32 *)((char *)&v779.m256i_i32[2] + 1) = *(__int32 *)((char *)&v822.m256i_i32[2] + 1);
            *(__int16 *)((char *)&v779.m256i_i16[6] + 1) = *(__int16 *)((char *)&v822.m256i_i16[6] + 1);
            v779.m256i_i8[15] = v822.m256i_i8[15];
            v822.m256i_i8[0] = 0;
            sub_1401FF690(&v822);
          }
          else
          {
            v822.m256i_i8[0] = 0;
            *(__m128i *)&v779.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            v779.m256i_i8[0] = 0;
            *(__int64 *)((char *)v779.m256i_i64 + 1) = *(__int64 *)((char *)v822.m256i_i64 + 1);
            *(__int32 *)((char *)&v779.m256i_i32[2] + 1) = *(__int32 *)((char *)&v822.m256i_i32[2] + 1);
            *(__int16 *)((char *)&v779.m256i_i16[6] + 1) = *(__int16 *)((char *)&v822.m256i_i16[6] + 1);
            v779.m256i_i8[15] = v822.m256i_i8[15];
          }
          sub_140961DC0(&v822, &v779);
          v105 = v822.m256i_i64[1];
          v106 = v822.m256i_i64[0];
          v107 = v801;
          if ( v822.m256i_i64[0] == -1 )
          {
            v822.m256i_i64[0] = v822.m256i_i64[1];
            v109 = (_QWORD *)v822.m256i_i64[1];
            nullsub_1(v102, v101, v103, v104, v665);
            v110 = (_WORD *)sub_140001650(2, 1);
            if ( !v110 )
              sub_14176E54B(1, 2);
            v105 = (__int64)v110;
            *v110 = 32123;
            v111 = *v109;
            v112 = *v109 == 1;
            v766 = v109;
            if ( v112 )
            {
              sub_1400478E0(v109 + 1);
            }
            else if ( !v111 )
            {
              v113 = v766[2];
              if ( v113 )
                sub_140001660(v766[1], v113, 1);
            }
            sub_140001660(v766, 40, 8);
            v108 = 2;
            v106 = 2;
            v107 = v801;
          }
          else
          {
            v108 = v822.m256i_i64[2];
          }
          v766 = (_QWORD *)v105;
          v753 = v106;
          if ( v107 == (_BYTE *)11
            && !(*v765 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)v765 + 3) ^ 0x6863726165735F6CLL) )
          {
            v757.m128i_i64[0] = 0;
            v758 = 0;
            nullsub_1(0, 0x6863726165735F6CLL, v103, v104, v665);
            v171 = (_DWORD *)sub_140001650(4, 1);
            if ( !v171 )
              sub_14176E54B(1, 4);
            *v171 = 1701869940;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v171;
            v828.m256i_i64[2] = 4;
            nullsub_1(v173, v172, v174, v175, v676);
            v176 = (__m128i *)sub_140001650(16, 1);
            v778 = (__int64)v176;
            if ( !v176 )
              sub_14176E54B(1, 16);
            *v176 = _mm_loadu_si128((const __m128i *)&xmmword_141854FA6);
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = 16;
            v822.m256i_i64[2] = (__int64)v176;
            v822.m256i_i64[3] = 16;
            sub_1401A27E0(&v827, &v757, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v178, v177, v179, v180, v677);
            v181 = (_WORD *)sub_140001650(2, 1);
            if ( !v181 )
              sub_14176E54B(1, 2);
            *v181 = 25705;
            v799.m128i_i64[0] = 2;
            v778 = (__int64)v181;
            v799.m128i_i64[1] = (__int64)v181;
            v800 = 2;
            sub_140B568A0(&v828);
            v186 = *(_OWORD *)&v828.m256i_u64[1];
            v778 = v828.m256i_i64[1];
            if ( v828.m256i_i64[2] < 0 )
            {
              v187 = 0;
LABEL_545:
              v789 = 1;
              sub_14176E54B(v187, *((_QWORD *)&v186 + 1));
            }
            if ( v828.m256i_i64[2] )
            {
              nullsub_1(v183, v182, v184, v185, v678);
              v187 = 1;
              v188 = sub_140001650(*((_QWORD *)&v186 + 1), 1);
              if ( !v188 )
                goto LABEL_545;
              v189 = v188;
              sub_14172B820(v188, v186, *((_QWORD *)&v186 + 1));
            }
            else
            {
              v189 = 1;
            }
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = *((_QWORD *)&v186 + 1);
            v822.m256i_i64[2] = v189;
            v822.m256i_i64[3] = *((_QWORD *)&v186 + 1);
            v789 = 0;
            sub_1401A27E0(&v827, &v757, &v799, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            v367 = v828.m256i_i64[0];
            if ( v828.m256i_i64[0] )
              sub_140001660(v778, v828.m256i_i64[0], 1);
            nullsub_1(v364, v367, v365, v366, v678);
            v368 = (_DWORD *)sub_140001650(7, 1);
            v373 = v776;
            if ( !v368 )
              sub_14176E54B(1, 7);
            *(_DWORD *)((char *)v368 + 3) = 1684627308;
            *v368 = 1819042147;
            v828.m256i_i64[0] = 7;
            v828.m256i_i64[1] = (__int64)v368;
            v828.m256i_i64[2] = 7;
            v374 = 1;
            if ( !(_BYTE)v777 )
            {
              nullsub_1(v370, v369, v371, v372, v700);
              v375 = sub_140001650(v373, 1);
              if ( !v375 )
              {
                v788 = 1;
                sub_14176E54B(1, v373);
              }
              v374 = v375;
              sub_14172B820(v375, v764, v373);
            }
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = v373;
            v822.m256i_i64[2] = v374;
            v822.m256i_i64[3] = v373;
            v788 = 0;
            sub_1401A27E0(&v827, &v757, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v377, v376, v378, v379, v700);
            v380 = sub_140001650(6, 1);
            if ( !v380 )
              sub_14176E54B(1, 6);
            *(_WORD *)(v380 + 4) = 29557;
            *(_DWORD *)v380 = 1952543859;
            v828.m256i_i64[0] = 6;
            v828.m256i_i64[1] = v380;
            v828.m256i_i64[2] = 6;
            nullsub_1(v382, v381, v383, v384, v701);
            v385 = sub_140001650(9, 1);
            v777 = v385;
            if ( !v385 )
              sub_14176E54B(1, 9);
            *(_QWORD *)v385 = 0x6574656C706D6F63LL;
            *(_BYTE *)(v385 + 8) = 100;
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = 9;
            v822.m256i_i64[2] = v385;
            v822.m256i_i64[3] = 9;
            sub_1401A27E0(&v827, &v757, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v387, v386, v388, v389, v702);
            v390 = sub_140001650(9, 1);
            if ( !v390 )
              sub_14176E54B(1, 9);
            *(_QWORD *)v390 = 0x6F69747563657865LL;
            *(_BYTE *)(v390 + 8) = 110;
            v828.m256i_i64[0] = 9;
            v828.m256i_i64[1] = v390;
            v828.m256i_i64[2] = 9;
            nullsub_1(0x6F69747563657865LL, v391, v392, v393, v703);
            v394 = sub_140001650(6, 1);
            v777 = v394;
            if ( !v394 )
              sub_14176E54B(1, 6);
            *(_WORD *)(v394 + 4) = 29806;
            *(_DWORD *)v394 = 1701407843;
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = 6;
            v822.m256i_i64[2] = v394;
            v822.m256i_i64[3] = 6;
            sub_1401A27E0(&v827, &v757, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v396, v395, v397, v398, v704);
            v399 = sub_140001650(9, 1);
            if ( !v399 )
              sub_14176E54B(1, 9);
            *(_QWORD *)v399 = 0x746E656D75677261LL;
            *(_BYTE *)(v399 + 8) = 115;
            v771.m128i_i64[0] = 9;
            v771.m128i_i64[1] = v399;
            v772 = 9;
            if ( v779.m256i_i8[0] == 5 )
            {
              v777 = v399;
              sub_1401A7FA0(&v822, &v779.m256i_u64[1]);
              v800 = v822.m256i_i64[2];
              v799 = _mm_loadu_si128((const __m128i *)&v822);
            }
            else
            {
              v799.m128i_i64[0] = 0;
              v800 = 0;
            }
            v806 = 1;
            sub_1404A0190(&v822, &v799);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_141856548);
            }
            v400 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v400;
            v806 = 0;
            sub_1401A27E0(&v828, &v757, &v771, &v827);
            if ( v828.m256i_i8[0] != -1 )
              sub_1401FF690(&v828);
            if ( v799.m128i_i64[0] )
            {
              v401 = v800;
              v822.m256i_i64[1] = 0;
              *(__m128i *)&v822.m256i_u64[2] = v799;
              v824 = 0;
              v825 = v799;
              v402 = 1;
            }
            else
            {
              v402 = 0;
              v401 = 0;
            }
            v822.m256i_i64[0] = v402;
            v823 = v402;
            v826 = v401;
            sub_140039B30(&v822);
            v798.m256i_i64[3] = v758;
            *(__m128i *)&v798.m256i_u64[1] = _mm_loadu_si128(&v757);
            v798.m256i_i8[0] = 5;
            v352 = v762;
            if ( v762 == v760 )
              sub_14172C8D0(&v760);
            goto LABEL_311;
          }
          if ( v759 )
          {
            v114 = sub_1404C3600(v733, &v744);
            v115 = _mm_cvtsi32_si128(v114 >> 57);
            v116 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v115, v115), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v118 = v773 & v114;
              HIDWORD(_RCX) = HIDWORD(v780);
              v120 = _mm_loadu_si128((const __m128i *)&v780[v118]);
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v120, v116));
              if ( _R15D )
                break;
LABEL_105:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v120, (__m128i)-1LL)) )
                goto LABEL_107;
              v114 = i + v118 + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   ecx, r15d }
              v122 = v118;
              v123 = -3LL * (v773 & (v118 + _RCX));
              HIDWORD(_RCX) = HIDWORD(v780);
              if ( v801 == *(_BYTE **)&v780[8 * v123 - 8]
                && !(unsigned int)sub_14172BEB0(v765, *(_QWORD *)&v780[8 * v123 - 16], v801) )
              {
                break;
              }
              v127 = _R15D - 1;
              LOWORD(v127) = _R15D & (_R15D - 1);
              v112 = (_WORD)v127 == 0;
              _R15D = v127;
              v118 = v122;
              if ( v112 )
                goto LABEL_105;
            }
            v771.m128i_i64[0] = 0;
            v772 = 0;
            nullsub_1(_RCX, v124, v125, v126, v665);
            v152 = (_DWORD *)sub_140001650(4, 1);
            if ( !v152 )
              sub_14176E54B(1, 4);
            *v152 = 1701869940;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v152;
            v828.m256i_i64[2] = 4;
            nullsub_1(v154, v153, v155, v156, v673);
            v157 = (__m128i *)sub_140001650(16, 1);
            v767 = (__int64)v157;
            if ( !v157 )
              sub_14176E54B(1, 16);
            *v157 = _mm_loadu_si128((const __m128i *)&xmmword_141853BB0);
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = 16;
            v822.m256i_i64[2] = (__int64)v157;
            v822.m256i_i64[3] = 16;
            sub_1401A27E0(&v827, &v771, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v159, v158, v160, v161, v674);
            v162 = (_WORD *)sub_140001650(2, 1);
            if ( !v162 )
              sub_14176E54B(1, 2);
            *v162 = 25705;
            v799.m128i_i64[0] = 2;
            v767 = (__int64)v162;
            v799.m128i_i64[1] = (__int64)v162;
            v800 = 2;
            sub_140B566D0(&v828);
            v167 = *(_OWORD *)&v828.m256i_u64[1];
            v767 = v828.m256i_i64[1];
            if ( v828.m256i_i64[2] < 0 )
            {
              v168 = 0;
LABEL_541:
              v792 = 1;
              sub_14176E54B(v168, *((_QWORD *)&v167 + 1));
            }
            if ( v828.m256i_i64[2] )
            {
              nullsub_1(v164, v163, v165, v166, v675);
              v168 = 1;
              v169 = sub_140001650(*((_QWORD *)&v167 + 1), 1);
              if ( !v169 )
                goto LABEL_541;
              v170 = v169;
              sub_14172B820(v169, v167, *((_QWORD *)&v167 + 1));
            }
            else
            {
              v170 = 1;
            }
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = *((_QWORD *)&v167 + 1);
            v822.m256i_i64[2] = v170;
            v822.m256i_i64[3] = *((_QWORD *)&v167 + 1);
            v792 = 0;
            sub_1401A27E0(&v827, &v771, &v799, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            v314 = v828.m256i_i64[0];
            if ( v828.m256i_i64[0] )
              sub_140001660(v767, v828.m256i_i64[0], 1);
            nullsub_1(v311, v314, v312, v313, v675);
            v315 = (_DWORD *)sub_140001650(7, 1);
            v320 = v776;
            if ( !v315 )
              sub_14176E54B(1, 7);
            *(_DWORD *)((char *)v315 + 3) = 1684627308;
            *v315 = 1819042147;
            v828.m256i_i64[0] = 7;
            v828.m256i_i64[1] = (__int64)v315;
            v828.m256i_i64[2] = 7;
            v321 = 1;
            if ( !(_BYTE)v777 )
            {
              nullsub_1(v317, v316, v318, v319, v695);
              v322 = sub_140001650(v320, 1);
              if ( !v322 )
              {
                v791 = 1;
                sub_14176E54B(1, v320);
              }
              v321 = v322;
              sub_14172B820(v322, v764, v320);
            }
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = v320;
            v822.m256i_i64[2] = v321;
            v822.m256i_i64[3] = v320;
            v791 = 0;
            sub_1401A27E0(&v827, &v771, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v324, v323, v325, v326, v695);
            v327 = (_DWORD *)sub_140001650(4, 1);
            if ( !v327 )
              sub_14176E54B(1, 4);
            *v327 = 1701667182;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v327;
            v828.m256i_i64[2] = 4;
            v332 = 1;
            v333 = (__int64)v801;
            if ( !(_BYTE)v778 )
            {
              nullsub_1(v329, v328, v330, v331, v696);
              v334 = sub_140001650(v333, 1);
              if ( !v334 )
              {
                v790 = 1;
                sub_14176E54B(1, v333);
              }
              v332 = v334;
              sub_14172B820(v334, v765, v333);
            }
            v822.m256i_i8[0] = 3;
            v822.m256i_i64[1] = v333;
            v822.m256i_i64[2] = v332;
            v822.m256i_i64[3] = v333;
            v790 = 0;
            sub_1401A27E0(&v827, &v771, &v828, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            nullsub_1(v336, v335, v337, v338, v696);
            v339 = sub_140001650(5, 1);
            if ( !v339 )
              sub_14176E54B(1, 5);
            *(_BYTE *)(v339 + 4) = 116;
            *(_DWORD *)v339 = 1970302569;
            v799.m128i_i64[0] = 5;
            v777 = v339;
            v799.m128i_i64[1] = v339;
            v800 = 5;
            v340 = (_BYTE *)sub_1414D4800(aInput_3, 5, &v779);
            if ( v340 || (v340 = (_BYTE *)sub_1414D4800(aPatch_0, 5, &v779)) != nullptr )
            {
              if ( *v340 == 3 )
              {
                sub_141543F00(&v822.m256i_u64[1], v340 + 8);
LABEL_262:
                v822.m256i_i8[0] = 3;
                v807 = 1;
                sub_1404B9F30(&v827, &v822);
                if ( v827.m256i_i8[0] == -1 )
                {
                  v828.m256i_i64[0] = v827.m256i_i64[1];
                  sub_14176E860(
                    (unsigned int)aCalledResultUn_15,
                    43,
                    (unsigned int)&v828,
                    (unsigned int)&off_141851870,
                    (__int64)&off_141856530);
                }
                v341 = _mm_loadu_si128((const __m128i *)&v827);
                *(__m128i *)&v828.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v827.m256i_u64[2]);
                *(__m128i *)v828.m256i_i8 = v341;
                v807 = 0;
                sub_1401A27E0(&v827, &v771, &v799, &v828);
                if ( v827.m256i_i8[0] != -1 )
                  sub_1401FF690(&v827);
                sub_1401FF690(&v822);
                nullsub_1(v343, v342, v344, v345, v697);
                v346 = sub_140001650(6, 1);
                if ( !v346 )
                  sub_14176E54B(1, 6);
                *(_WORD *)(v346 + 4) = 29557;
                *(_DWORD *)v346 = 1952543859;
                v828.m256i_i64[0] = 6;
                v828.m256i_i64[1] = v346;
                v828.m256i_i64[2] = 6;
                nullsub_1(v348, v347, v349, v350, v698);
                v351 = sub_140001650(9, 1);
                v777 = v351;
                if ( !v351 )
                  sub_14176E54B(1, 9);
                *(_QWORD *)v351 = 0x6574656C706D6F63LL;
                *(_BYTE *)(v351 + 8) = 100;
                v822.m256i_i8[0] = 3;
                v822.m256i_i64[1] = 9;
                v822.m256i_i64[2] = v351;
                v822.m256i_i64[3] = 9;
                sub_1401A27E0(&v827, &v771, &v828, &v822);
                if ( v827.m256i_i8[0] != -1 )
                  sub_1401FF690(&v827);
                v798.m256i_i64[3] = v772;
                *(__m128i *)&v798.m256i_u64[1] = _mm_loadu_si128(&v771);
                v798.m256i_i8[0] = 5;
                v352 = v762;
                if ( v762 == v760 )
                  sub_14172C8D0(&v760);
LABEL_311:
                v403 = v761;
                v404 = 32 * v352;
                v405 = _mm_loadu_si128((const __m128i *)&v798);
                *(__m128i *)(v761 + v404 + 16) = _mm_loadu_si128((const __m128i *)&v798.m256i_u64[2]);
                *(__m128i *)(v403 + v404) = v405;
                v762 = v352 + 1;
                v406 = v753;
                goto LABEL_312;
              }
              v828.m256i_i64[0] = 0;
              *(_OWORD *)&v828.m256i_u64[1] = 1u;
              v827.m256i_i64[2] = 1610612768;
              v827.m256i_i64[0] = (__int64)&v828;
              v827.m256i_i64[1] = (__int64)&off_141857488;
              if ( (unsigned __int8)sub_1414D5DA0(v340, &v827) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_8,
                  55,
                  (unsigned int)&v775,
                  (unsigned int)&unk_141851890,
                  (__int64)&off_141857540);
            }
            else
            {
              if ( v779.m256i_i8[0] == 3 )
              {
                sub_141543F00(&v822.m256i_u64[1], &v779.m256i_u64[1]);
                goto LABEL_262;
              }
              v828.m256i_i64[0] = 0;
              *(_OWORD *)&v828.m256i_u64[1] = 1u;
              v827.m256i_i64[2] = 1610612768;
              v827.m256i_i64[0] = (__int64)&v828;
              v827.m256i_i64[1] = (__int64)&off_141857488;
              if ( (unsigned __int8)sub_1414D5DA0(&v779, &v827) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_8,
                  55,
                  (unsigned int)&v775,
                  (unsigned int)&unk_141851890,
                  (__int64)&off_141857540);
            }
            v822.m256i_i64[3] = v828.m256i_i64[2];
            *(__m128i *)&v822.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v828);
            goto LABEL_262;
          }
LABEL_107:
          sub_1413FD8E0(&v822);
          *(__m128i *)v828.m256i_i8 = _mm_loadu_si128((const __m128i *)&v822);
          v827.m256i_i64[0] = (__int64)&v828;
          v827.m256i_i64[1] = (__int64)sub_140512940;
          sub_141543AF0(&v822, &unk_1418555E8, &v827);
          v742 = v822.m256i_i64[1];
          v767 = v822.m256i_i64[0];
          v128 = v822.m256i_i64[2];
          sub_140A416F0((unsigned int)&v822, (_DWORD)v765, (_DWORD)v801, (_DWORD)v766, v108);
          v755 = v822.m256i_i64[1];
          v739 = v822.m256i_i64[0];
          v740 = v822.m256i_i64[3];
          v778 = v822.m256i_i64[2];
          v743 = v823;
          v129 = v824;
          v799.m128i_i64[0] = 0;
          v800 = 0;
          nullsub_1(v131, v130, v132, v133, v669);
          v134 = (_DWORD *)sub_140001650(4, 1);
          if ( !v134 )
            sub_14176E54B(1, 4);
          *v134 = 1701869940;
          v798.m256i_i64[0] = 4;
          v798.m256i_i64[1] = (__int64)v134;
          v798.m256i_i64[2] = 4;
          nullsub_1(v136, v135, v137, v138, v670);
          v741 = sub_140001650(13, 1);
          if ( !v741 )
            sub_14176E54B(1, 13);
          v139 = (_QWORD *)v741;
          *(_QWORD *)(v741 + 5) = 0x6C6C61635F6E6F69LL;
          *v139 = 0x6E6F6974636E7566LL;
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = 13;
          v822.m256i_i64[2] = (__int64)v139;
          v822.m256i_i64[3] = 13;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v141, v140, v142, v143, v671);
          v144 = (_WORD *)sub_140001650(2, 1);
          if ( !v144 )
            sub_14176E54B(1, 2);
          *v144 = 25705;
          v798.m256i_i64[0] = 2;
          v798.m256i_i64[1] = (__int64)v144;
          v798.m256i_i64[2] = 2;
          if ( v128 < 0 )
          {
            v149 = 0;
LABEL_537:
            v796 = 1;
            sub_14176E54B(v149, v128);
          }
          if ( v128 )
          {
            nullsub_1(v146, v145, v147, v148, v672);
            v149 = 1;
            v150 = sub_140001650(v128, 1);
            if ( !v150 )
              goto LABEL_537;
            v151 = v150;
            sub_14172B820(v150, v742, v128);
          }
          else
          {
            v151 = 1;
          }
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = v128;
          v822.m256i_i64[2] = v151;
          v822.m256i_i64[3] = v128;
          v796 = 0;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v191, v190, v192, v193, v672);
          v194 = (_DWORD *)sub_140001650(7, 1);
          if ( !v194 )
            sub_14176E54B(1, 7);
          *(_DWORD *)((char *)v194 + 3) = 1684627308;
          *v194 = 1819042147;
          v798.m256i_i64[0] = 7;
          v798.m256i_i64[1] = (__int64)v194;
          v798.m256i_i64[2] = 7;
          v199 = 1;
          if ( !(_BYTE)v777 )
          {
            nullsub_1(v196, v195, v197, v198, v679);
            v200 = v776;
            v201 = sub_140001650(v776, 1);
            if ( !v201 )
            {
              v795 = 1;
              sub_14176E54B(1, v200);
            }
            v199 = v201;
            sub_14172B820(v201, v764, v200);
          }
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = v776;
          v822.m256i_i64[2] = v199;
          v822.m256i_i64[3] = v776;
          v795 = 0;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v203, v202, v204, v205, v679);
          v206 = (_DWORD *)sub_140001650(4, 1);
          if ( !v206 )
            sub_14176E54B(1, 4);
          *v206 = 1701667182;
          v798.m256i_i64[0] = 4;
          v798.m256i_i64[1] = (__int64)v206;
          v798.m256i_i64[2] = 4;
          v210 = v778;
          if ( v778 < 0 )
          {
            v211 = 0;
LABEL_543:
            v794 = 1;
            sub_14176E54B(v211, v210);
          }
          if ( v778 )
          {
            nullsub_1(v207, v778, v208, v209, v680);
            v211 = 1;
            v212 = sub_140001650(v778, 1);
            v210 = v778;
            if ( !v212 )
              goto LABEL_543;
            v213 = v212;
            sub_14172B820(v212, v755, v778);
            v210 = v778;
          }
          else
          {
            v213 = 1;
          }
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = v210;
          v822.m256i_i64[2] = v213;
          v822.m256i_i64[3] = v210;
          v794 = 0;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v354, v353, v355, v356, v680);
          v357 = sub_140001650(9, 1);
          if ( !v357 )
            sub_14176E54B(1, 9);
          *(_QWORD *)v357 = 0x746E656D75677261LL;
          *(_BYTE *)(v357 + 8) = 115;
          v798.m256i_i64[0] = 9;
          v798.m256i_i64[1] = v357;
          v798.m256i_i64[2] = 9;
          if ( v129 < 0 )
          {
            v361 = 0;
LABEL_547:
            v793 = 1;
            sub_14176E54B(v361, v129);
          }
          if ( v129 )
          {
            nullsub_1(0x746E656D75677261LL, v358, v359, v360, v699);
            v361 = 1;
            v362 = sub_140001650(v129, 1);
            if ( !v362 )
              goto LABEL_547;
            v363 = v362;
            sub_14172B820(v362, v743, v129);
          }
          else
          {
            v363 = 1;
          }
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = v129;
          v822.m256i_i64[2] = v363;
          v822.m256i_i64[3] = v129;
          v793 = 0;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v408, v407, v409, v410, v699);
          v411 = sub_140001650(6, 1);
          if ( !v411 )
            sub_14176E54B(1, 6);
          *(_WORD *)(v411 + 4) = 29557;
          *(_DWORD *)v411 = 1952543859;
          v798.m256i_i64[0] = 6;
          v798.m256i_i64[1] = v411;
          v798.m256i_i64[2] = 6;
          nullsub_1(v413, v412, v414, v415, v705);
          v416 = sub_140001650(9, 1);
          v777 = v416;
          if ( !v416 )
            sub_14176E54B(1, 9);
          *(_QWORD *)v416 = 0x6574656C706D6F63LL;
          *(_BYTE *)(v416 + 8) = 100;
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = 9;
          v822.m256i_i64[2] = v416;
          v822.m256i_i64[3] = 9;
          sub_1401A27E0(&v827, &v799, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          v828.m256i_i64[3] = v800;
          *(__m128i *)&v828.m256i_u64[1] = _mm_loadu_si128(&v799);
          v828.m256i_i8[0] = 5;
          v803 = 1;
          sub_140A26EE0(&v828, v755, v778, v774);
          v417 = _mm_loadu_si128((const __m128i *)&v828);
          *(__m128i *)&v822.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v828.m256i_u64[2]);
          *(__m128i *)v822.m256i_i8 = v417;
          v418 = v762;
          if ( v762 == v760 )
            sub_14172C8D0(&v760);
          v419 = v761;
          v420 = 32 * v418;
          v421 = _mm_load_si128((const __m128i *)&v822);
          *(__m128i *)(v761 + v420 + 16) = _mm_load_si128((const __m128i *)&v822.m256i_u64[2]);
          *(__m128i *)(v419 + v420) = v421;
          v762 = v418 + 1;
          if ( v740 )
            sub_140001660(v743, v740, 1);
          v406 = v753;
          if ( v739 )
            sub_140001660(v755, v739, 1);
          if ( v767 )
            sub_140001660(v742, v767, 1);
LABEL_312:
          if ( v406 )
            sub_140001660(v766, v406, 1);
          sub_1401FF690(&v779);
          if ( v801 )
            sub_140001660(v765, v801, 1);
          if ( v776 )
            sub_140001660(v764, v776, 1);
          break;
        case 15LL:
          if ( *(_QWORD *)v25 ^ 0x745F726576726573LL | *(_QWORD *)(v25 + 7) ^ 0x6573755F6C6F6F74LL )
            continue;
          v829 = 1;
          v39 = sub_1414D4800(aName_7, 4, v22);
          if ( !v39 )
            continue;
          if ( *(_BYTE *)v39 != 3 )
            continue;
          if ( *(_QWORD *)(v39 + 24) != 10 )
            continue;
          v42 = *(_QWORD *)(v39 + 16);
          v43 = *(_QWORD *)v42 ^ 0x726165735F626577LL;
          if ( v43 | *(unsigned __int16 *)(v42 + 8) ^ 0x6863LL )
            continue;
          v779.m256i_i64[0] = 0;
          v779.m256i_i64[2] = 0;
          nullsub_1(v43, 0x726165735F626577LL, v40, v41, v665);
          v44 = (_DWORD *)sub_140001650(4, 1);
          if ( !v44 )
            sub_14176E54B(1, 4);
          *v44 = 1701869940;
          v798.m256i_i64[0] = 4;
          v798.m256i_i64[1] = (__int64)v44;
          v798.m256i_i64[2] = 4;
          nullsub_1(v46, v45, v47, v48, v666);
          v49 = (_BYTE *)sub_140001650(15, 1);
          v801 = v49;
          if ( !v49 )
            sub_14176E54B(1, 15);
          qmemcpy(v49, "web_search_call", 15);
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = 15;
          v822.m256i_i64[2] = (__int64)v49;
          v822.m256i_i64[3] = 15;
          sub_1401A27E0(&v827, &v779, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          nullsub_1(v51, v50, v52, v53, v667);
          v54 = (_WORD *)sub_140001650(2, 1);
          if ( !v54 )
            sub_14176E54B(1, 2);
          *v54 = 25705;
          v798.m256i_i64[0] = 2;
          v801 = v54;
          v798.m256i_i64[1] = (__int64)v54;
          v798.m256i_i64[2] = 2;
          sub_1413FD8E0(&v822);
          v799 = _mm_loadu_si128((const __m128i *)&v822);
          v827.m256i_i64[0] = (__int64)&v799;
          v827.m256i_i64[1] = (__int64)sub_140512940;
          sub_141543AF0(&v822, &unk_141856524, &v827);
          v58 = v822.m256i_i64[2];
          v776 = v822.m256i_i64[1];
          v801 = (_BYTE *)v822.m256i_i64[0];
          if ( v822.m256i_i64[2] < 0 )
          {
            v59 = 0;
LABEL_539:
            v797 = 1;
            sub_14176E54B(v59, v58);
          }
          if ( v822.m256i_i64[2] )
          {
            nullsub_1(v822.m256i_i64[1], v55, v56, v57, v668);
            v59 = 1;
            v60 = sub_140001650(v58, 1);
            if ( !v60 )
              goto LABEL_539;
            v61 = v60;
            sub_14172B820(v60, v776, v58);
          }
          else
          {
            v61 = 1;
          }
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = v58;
          v822.m256i_i64[2] = v61;
          v822.m256i_i64[3] = v58;
          v797 = 0;
          sub_1401A27E0(&v827, &v779, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          v304 = v801;
          if ( v801 )
            sub_140001660(v776, v801, 1);
          nullsub_1(v301, v304, v302, v303, v668);
          v305 = sub_140001650(6, 1);
          if ( !v305 )
            sub_14176E54B(1, 6);
          *(_WORD *)(v305 + 4) = 29557;
          *(_DWORD *)v305 = 1952543859;
          v798.m256i_i64[0] = 6;
          v798.m256i_i64[1] = v305;
          v798.m256i_i64[2] = 6;
          nullsub_1(v307, v306, v308, v309, v694);
          v310 = sub_140001650(9, 1);
          v801 = (_BYTE *)v310;
          if ( !v310 )
            sub_14176E54B(1, 9);
          *(_QWORD *)v310 = 0x6574656C706D6F63LL;
          *(_BYTE *)(v310 + 8) = 100;
          v822.m256i_i8[0] = 3;
          v822.m256i_i64[1] = 9;
          v822.m256i_i64[2] = v310;
          v822.m256i_i64[3] = 9;
          sub_1401A27E0(&v827, &v779, &v798, &v822);
          if ( v827.m256i_i8[0] != -1 )
            sub_1401FF690(&v827);
          v828.m256i_i64[3] = v779.m256i_i64[2];
          *(_OWORD *)&v828.m256i_u64[1] = *(_OWORD *)v779.m256i_i8;
          v828.m256i_i8[0] = 5;
          v296 = v770;
          if ( v770 == v768 )
            sub_14172C8D0(&v768);
          v297 = v769;
          v298 = 32LL * (_QWORD)v296;
          v299 = _mm_loadu_si128((const __m128i *)&v828);
          v300 = _mm_loadu_si128((const __m128i *)&v828.m256i_u64[2]);
LABEL_237:
          *(__m128i *)(v297 + v298 + 16) = v300;
          *(__m128i *)(v297 + v298) = v299;
          v770 = (__m128i *)&v296->m128i_i8[1];
          continue;
        case 17LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v25 + 16)), v21),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v25), si128))) != 0xFFFF )
            continue;
LABEL_52:
          v829 = 1;
          v69 = sub_1414D4800(aType_8, 4, v22);
          if ( !v69 || *(_BYTE *)v69 != 3 )
            continue;
          v70 = *(const __m128i **)(v69 + 16);
          v71 = *(_QWORD *)(v69 + 24);
          if ( v71 == 17 )
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(v70[1].m128i_u8[0]), v21),
                     _mm_cmpeq_epi8(_mm_loadu_si128(v70), si128))) != 0xFFFF )
              continue;
            v829 = 1;
            v84 = sub_1414D4800("data", 4, v22);
            v88 = 1;
            if ( v84 )
            {
              if ( *(_BYTE *)v84 == 3 )
              {
                v88 = *(_QWORD *)(v84 + 16);
                v89 = *(_QWORD *)(v84 + 24);
              }
              else
              {
                v89 = 0;
              }
            }
            else
            {
              v89 = 0;
            }
            v757.m128i_i64[0] = v88;
            v757.m128i_i64[1] = v89;
            v779.m256i_i64[0] = 0;
            v779.m256i_i64[2] = 0;
            nullsub_1(v88, v85, v86, v87, v665);
            v214 = (_DWORD *)sub_140001650(4, 1);
            if ( !v214 )
              sub_14176E54B(1, 4);
            *v214 = 1701869940;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v214;
            v828.m256i_i64[2] = 4;
            v821 = 1;
            sub_1404A1EA0(&v822, &off_141856578);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565C8);
            }
            v215 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v215;
            v821 = 0;
            sub_1401A27E0(&v822, &v779, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v217, v216, v218, v219, v681);
            v220 = (_DWORD *)sub_140001650(4, 1);
            if ( !v220 )
              sub_14176E54B(1, 4);
            *v220 = 1635017060;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v220;
            v828.m256i_i64[2] = 4;
            v820 = 1;
            sub_1404A1EA0(&v822, &v757);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565C8);
            }
            v221 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v221;
            v820 = 0;
            sub_1401A27E0(&v822, &v779, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            v798.m256i_i64[3] = v779.m256i_i64[2];
            *(_OWORD *)&v798.m256i_u64[1] = *(_OWORD *)v779.m256i_i8;
            v798.m256i_i8[0] = 5;
            v771.m128i_i64[0] = 0;
            v772 = 0;
            nullsub_1(v223, v222, v224, v225, v682);
            v226 = (_WORD *)sub_140001650(2, 1);
            if ( !v226 )
              sub_14176E54B(1, 2);
            *v226 = 25705;
            v799.m128i_i64[0] = 2;
            v801 = v226;
            v799.m128i_i64[1] = (__int64)v226;
            v800 = 2;
            sub_1413FD8E0(&v822);
            *(_OWORD *)v779.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v827.m256i_i64[0] = (__int64)&v779;
            v827.m256i_i64[1] = (__int64)sub_140512940;
            sub_141543AF0(&v822, &unk_141855590, &v827);
            *(_OWORD *)v779.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v779.m256i_i64[2] = v822.m256i_i64[2];
            v819 = 1;
            sub_1404A0860(&v822, &v779);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565E0);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v819 = 0;
            sub_1401A27E0(&v822, &v771, &v799, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            v230 = v779.m256i_i64[0];
            if ( v779.m256i_i64[0] )
              sub_140001660(v779.m256i_i64[1], v779.m256i_i64[0], 1);
            nullsub_1(v227, v230, v228, v229, v683);
            v231 = (_DWORD *)sub_140001650(4, 1);
            if ( !v231 )
              sub_14176E54B(1, 4);
            *v231 = 1701869940;
            v779.m256i_i64[0] = 4;
            v779.m256i_i64[1] = (__int64)v231;
            v779.m256i_i64[2] = 4;
            v818 = 1;
            sub_1404A1EA0(&v822, &off_141855568);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565E0);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v818 = 0;
            sub_1401A27E0(&v822, &v771, &v779, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v233, v232, v234, v235, v684);
            v236 = sub_140001650(6, 1);
            if ( !v236 )
              sub_14176E54B(1, 6);
            *(_WORD *)(v236 + 4) = 29557;
            *(_DWORD *)v236 = 1952543859;
            v779.m256i_i64[0] = 6;
            v779.m256i_i64[1] = v236;
            v779.m256i_i64[2] = 6;
            v817 = 1;
            sub_1404A1EA0(&v822, &off_141851378);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565E0);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v817 = 0;
            sub_1401A27E0(&v822, &v771, &v779, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v238, v237, v239, v240, v685);
            v241 = (_DWORD *)sub_140001650(7, 1);
            if ( !v241 )
              sub_14176E54B(1, 7);
            *(_DWORD *)((char *)v241 + 3) = 2037539181;
            *v241 = 1835890035;
            v779.m256i_i64[0] = 7;
            v779.m256i_i64[1] = (__int64)v241;
            v779.m256i_i64[2] = 7;
            v822.m256i_i64[1] = 0;
            *(_OWORD *)&v822.m256i_u64[2] = 8u;
            v822.m256i_i8[0] = 4;
            sub_1401A27E0(&v827, &v771, &v779, &v822);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            v828.m256i_i64[3] = v772;
            *(__m128i *)&v828.m256i_u64[1] = v771;
            v828.m256i_i8[0] = 5;
            set_anthropic_thinking_carrier((__int64)&v828, (__int64)&v798);
            v242 = v828.m256i_i8[0];
            v243 = _mm_loadu_si128((const __m128i *)&v828.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = _mm_loadu_si128((const __m128i *)&v828.m256i_i8[1]);
            *(__m128i *)((char *)&v827.m256i_u64[1] + 7) = v243;
            v829 = 1;
            sub_1401FF690(&v798);
          }
          else
          {
            if ( v71 != 8 || v70->m128i_i64[0] != 0x676E696B6E696874LL )
              continue;
            v829 = 1;
            v72 = sub_1414D4800(aThinking_1, 8, v22);
            if ( v72 && *(_BYTE *)v72 == 3 )
            {
              v73 = *(_QWORD *)(v72 + 16);
              v74 = *(_QWORD *)(v72 + 24);
              v736 = v73;
              v737 = v74;
              LOBYTE(v801) = v74 == 0;
            }
            else
            {
              v736 = 1;
              v737 = 0;
              LOBYTE(v801) = 1;
            }
            v829 = 1;
            v95 = sub_1414D4800(aSignature, 9, v22);
            v99 = 1;
            if ( v95 )
            {
              if ( *(_BYTE *)v95 == 3 )
              {
                v99 = *(_QWORD *)(v95 + 16);
                v100 = *(_QWORD *)(v95 + 24);
              }
              else
              {
                v100 = 0;
              }
            }
            else
            {
              v100 = 0;
            }
            v732[0] = v99;
            v732[1] = v100;
            v798.m256i_i64[0] = 0;
            v798.m256i_i64[2] = 0;
            nullsub_1(v99, v96, v97, v98, v665);
            v244 = (_DWORD *)sub_140001650(4, 1);
            if ( !v244 )
              sub_14176E54B(1, 4);
            *v244 = 1701869940;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v244;
            v828.m256i_i64[2] = 4;
            v816 = 1;
            sub_1404A1EA0(&v822, &off_1418565A0);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565F8);
            }
            v245 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v245;
            v816 = 0;
            sub_1401A27E0(&v822, &v798, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v247, v246, v248, v249, v686);
            v250 = (_QWORD *)sub_140001650(8, 1);
            if ( !v250 )
              sub_14176E54B(1, 8);
            *v250 = 0x676E696B6E696874LL;
            v828.m256i_i64[0] = 8;
            v828.m256i_i64[1] = (__int64)v250;
            v828.m256i_i64[2] = 8;
            v815 = 1;
            sub_1404A1EA0(&v822, &v736);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565F8);
            }
            v251 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v251;
            v815 = 0;
            sub_1401A27E0(&v822, &v798, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v253, v252, v254, v255, v687);
            v256 = sub_140001650(9, 1);
            if ( !v256 )
              sub_14176E54B(1, 9);
            *(_QWORD *)v256 = 0x727574616E676973LL;
            *(_BYTE *)(v256 + 8) = 101;
            v828.m256i_i64[0] = 9;
            v828.m256i_i64[1] = v256;
            v828.m256i_i64[2] = 9;
            v814 = 1;
            sub_1404A1EA0(&v822, v732);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_1418565F8);
            }
            v257 = _mm_loadu_si128((const __m128i *)&v822);
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = v257;
            v814 = 0;
            sub_1401A27E0(&v822, &v798, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            v779.m256i_i64[3] = v798.m256i_i64[2];
            *(_OWORD *)&v779.m256i_u64[1] = *(_OWORD *)v798.m256i_i8;
            v779.m256i_i8[0] = 5;
            *(_QWORD *)&v744 = 0;
            v745 = 0;
            nullsub_1(&v779.m256i_u64[1], v258, v259, v260, v688);
            v261 = (_WORD *)sub_140001650(2, 1);
            if ( !v261 )
              sub_14176E54B(1, 2);
            *v261 = 25705;
            v799.m128i_i64[0] = 2;
            v776 = (__int64)v261;
            v799.m128i_i64[1] = (__int64)v261;
            v800 = 2;
            sub_1413FD8E0(&v822);
            *(_OWORD *)v828.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v827.m256i_i64[0] = (__int64)&v828;
            v827.m256i_i64[1] = (__int64)sub_140512940;
            sub_141543AF0(&v822, &unk_141855590, &v827);
            *(_OWORD *)v828.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v828.m256i_i64[2] = v822.m256i_i64[2];
            v813 = 1;
            sub_1404A0860(&v822, &v828);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_141856610);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v813 = 0;
            sub_1401A27E0(&v822, &v744, &v799, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            v265 = v828.m256i_i64[0];
            if ( v828.m256i_i64[0] )
              sub_140001660(v828.m256i_i64[1], v828.m256i_i64[0], 1);
            nullsub_1(v262, v265, v263, v264, v689);
            v266 = (_DWORD *)sub_140001650(4, 1);
            if ( !v266 )
              sub_14176E54B(1, 4);
            *v266 = 1701869940;
            v828.m256i_i64[0] = 4;
            v828.m256i_i64[1] = (__int64)v266;
            v828.m256i_i64[2] = 4;
            v812 = 1;
            sub_1404A1EA0(&v822, &off_141855568);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_141856610);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v812 = 0;
            sub_1401A27E0(&v822, &v744, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v268, v267, v269, v270, v690);
            v271 = sub_140001650(6, 1);
            if ( !v271 )
              sub_14176E54B(1, 6);
            *(_WORD *)(v271 + 4) = 29557;
            *(_DWORD *)v271 = 1952543859;
            v828.m256i_i64[0] = 6;
            v828.m256i_i64[1] = v271;
            v828.m256i_i64[2] = 6;
            v811 = 1;
            sub_1404A1EA0(&v822, &off_141851378);
            if ( v822.m256i_i8[0] == -1 )
            {
              v827.m256i_i64[0] = v822.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v827,
                (unsigned int)&off_141851870,
                (__int64)&off_141856610);
            }
            *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
            *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
            v811 = 0;
            sub_1401A27E0(&v822, &v744, &v828, &v827);
            if ( v822.m256i_i8[0] != -1 )
              sub_1401FF690(&v822);
            nullsub_1(v273, v272, v274, v275, v691);
            v276 = (_DWORD *)sub_140001650(7, 1);
            if ( !v276 )
              sub_14176E54B(1, 7);
            v281 = v276;
            *(_DWORD *)((char *)v276 + 3) = 2037539181;
            *v276 = 1835890035;
            v757.m128i_i64[0] = 7;
            v757.m128i_i64[1] = (__int64)v276;
            v758 = 7;
            if ( (_BYTE)v801 )
            {
              v282 = 8;
              v283 = 0;
            }
            else
            {
              nullsub_1(v278, v277, v279, v280, v665);
              v801 = (_BYTE *)sub_140001650(32, 8);
              v776 = (__int64)v281;
              if ( !v801 )
                sub_14176E531(8, 32);
              v771.m128i_i64[0] = 0;
              v772 = 0;
              nullsub_1(v285, v284, v286, v287, v692);
              v288 = (_DWORD *)sub_140001650(4, 1);
              if ( !v288 )
                sub_14176E54B(1, 4);
              *v288 = 1701869940;
              v799.m128i_i64[0] = 4;
              v799.m128i_i64[1] = (__int64)v288;
              v800 = 4;
              v810 = 1;
              sub_1404A1EA0(&v822, &off_1418555A8);
              if ( v822.m256i_i8[0] == -1 )
              {
                v827.m256i_i64[0] = v822.m256i_i64[1];
                sub_14176E860(
                  (unsigned int)aCalledResultUn_15,
                  43,
                  (unsigned int)&v827,
                  (unsigned int)&off_141851870,
                  (__int64)&off_141856628);
              }
              *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
              *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
              v810 = 0;
              sub_1401A27E0(&v822, &v771, &v799, &v827);
              if ( v822.m256i_i8[0] != -1 )
                sub_1401FF690(&v822);
              nullsub_1(v290, v289, v291, v292, v693);
              v293 = (_DWORD *)sub_140001650(4, 1);
              if ( !v293 )
                sub_14176E54B(1, 4);
              *v293 = 1954047348;
              v799.m128i_i64[0] = 4;
              v799.m128i_i64[1] = (__int64)v293;
              v800 = 4;
              v809 = 1;
              sub_1404A1EA0(&v822, &v736);
              if ( v822.m256i_i8[0] == -1 )
              {
                v827.m256i_i64[0] = v822.m256i_i64[1];
                sub_14176E860(
                  (unsigned int)aCalledResultUn_15,
                  43,
                  (unsigned int)&v827,
                  (unsigned int)&off_141851870,
                  (__int64)&off_141856628);
              }
              *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
              *(_OWORD *)v827.m256i_i8 = *(_OWORD *)v822.m256i_i8;
              v809 = 0;
              sub_1401A27E0(&v822, &v771, &v799, &v827);
              if ( v822.m256i_i8[0] != -1 )
                sub_1401FF690(&v822);
              *(__m128i *)v822.m256i_i8 = v771;
              v822.m256i_i64[2] = v772;
              *(__int64 *)((char *)&v828.m256i_i64[2] + 7) = v772;
              *(__m128i *)((char *)&v828.m256i_u32[1] + 3) = v771;
              v282 = (__int64)v801;
              *v801 = 5;
              v294 = _mm_loadu_si128((const __m128i *)((char *)&v828.m256i_u64[1] + 7));
              *(_OWORD *)(v282 + 1) = *(_OWORD *)v828.m256i_i8;
              *(__m128i *)(v282 + 16) = v294;
              v283 = 1;
            }
            v822.m256i_i64[1] = v283;
            v822.m256i_i64[2] = v282;
            v822.m256i_i64[3] = v283;
            v822.m256i_i8[0] = 4;
            v808 = 1;
            sub_1404B9F30(&v827, &v822);
            if ( v827.m256i_i8[0] == -1 )
            {
              v828.m256i_i64[0] = v827.m256i_i64[1];
              sub_14176E860(
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v828,
                (unsigned int)&off_141851870,
                (__int64)&off_141856610);
            }
            *(__m128i *)&v828.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v827.m256i_u64[2]);
            *(_OWORD *)v828.m256i_i8 = *(_OWORD *)v827.m256i_i8;
            v808 = 0;
            sub_1401A27E0(&v827, &v744, &v757, &v828);
            if ( v827.m256i_i8[0] != -1 )
              sub_1401FF690(&v827);
            sub_1401FF690(&v822);
            v798.m256i_i64[3] = v745;
            *(_OWORD *)&v798.m256i_u64[1] = v744;
            v798.m256i_i8[0] = 5;
            set_anthropic_thinking_carrier((__int64)&v798, (__int64)&v779);
            v242 = v798.m256i_i8[0];
            v295 = _mm_loadu_si128((const __m128i *)&v798.m256i_u64[2]);
            *(__m128i *)v827.m256i_i8 = _mm_loadu_si128((const __m128i *)&v798.m256i_i8[1]);
            *(__m128i *)((char *)&v827.m256i_u64[1] + 7) = v295;
            v829 = 1;
            sub_1401FF690(&v779);
          }
          if ( v242 == -1 )
            continue;
          v822.m256i_i8[0] = v242;
          *(_OWORD *)&v822.m256i_u64[2] = *(_OWORD *)((char *)&v827.m256i_u64[1] + 7);
          *(_OWORD *)&v822.m256i_i8[1] = *(_OWORD *)v827.m256i_i8;
          v296 = v770;
          if ( v770 == v768 )
            sub_14172C8D0(&v768);
          v297 = v769;
          v298 = 32LL * (_QWORD)v296;
          v299 = _mm_loadu_si128((const __m128i *)&v822);
          v300 = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
          goto LABEL_237;
        default:
          continue;
      }
    }
  }
  if ( v751 )
  {
    v829 = 1;
    sub_140A9F870((unsigned int)&v822, v750, v751, (unsigned int)&unk_141850D08, 1);
    v426 = v822.m256i_i64[1];
    v425 = v822.m256i_i64[0];
    v427 = v822.m256i_i64[2];
    v428 = v748;
    v759 = v822.m256i_i64[1];
    v774 = (__m128i *)v822.m256i_i64[0];
    if ( v822.m256i_i64[2] > (unsigned __int64)(v746 - v748) )
    {
      sub_14172C420((unsigned int)&v746, v748, v822.m256i_i32[4], 1, 1);
      v428 = v748;
      v426 = v759;
    }
    else if ( !v822.m256i_i64[2] )
    {
      v429 = 1;
      goto LABEL_344;
    }
    sub_14172B820(v428 + v747, v426, v427);
    v429 = 0;
LABEL_344:
    v748 = v427 + v428;
    v799.m128i_i64[0] = 0;
    v800 = 0;
    nullsub_1(v425, v422, v423, v424, v706);
    v430 = (_DWORD *)sub_140001650(4, 1);
    if ( !v430 )
      sub_14176E54B(1, 4);
    *v430 = 1701869940;
    v828.m256i_i64[0] = 4;
    v828.m256i_i64[1] = (__int64)v430;
    v828.m256i_i64[2] = 4;
    nullsub_1(v432, v431, v433, v434, v707);
    v435 = (_DWORD *)sub_140001650(7, 1);
    v780 = v435;
    if ( !v435 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v435 + 3) = 1701273971;
    *v435 = 1936942445;
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = 7;
    v822.m256i_i64[2] = (__int64)v435;
    v822.m256i_i64[3] = 7;
    sub_1401A27E0(&v827, &v799, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v437, v436, v438, v439, v708);
    v440 = (_WORD *)sub_140001650(2, 1);
    if ( !v440 )
      sub_14176E54B(1, 2);
    *v440 = 25705;
    v828.m256i_i64[0] = 2;
    v780 = v440;
    v828.m256i_i64[1] = (__int64)v440;
    v828.m256i_i64[2] = 2;
    sub_1413FD8E0(&v822);
    *(__m128i *)v798.m256i_i8 = _mm_loadu_si128((const __m128i *)&v822);
    v827.m256i_i64[0] = (__int64)&v798;
    v827.m256i_i64[1] = (__int64)sub_140512940;
    sub_141543AF0(&v822, &unk_1418555D0, &v827);
    v445 = v822.m256i_i64[2];
    v773 = v822.m256i_i64[1];
    v780 = (_BYTE *)v822.m256i_i64[0];
    if ( v822.m256i_i64[2] < 0 )
    {
      v446 = 0;
      goto LABEL_351;
    }
    if ( v822.m256i_i64[2] )
    {
      nullsub_1(v442, v441, v443, v444, v709);
      v446 = 1;
      v447 = sub_140001650(v445, 1);
      if ( !v447 )
      {
LABEL_351:
        v787 = 1;
        sub_14176E54B(v446, v445);
      }
      v448 = v447;
      sub_14172B820(v447, v773, v445);
    }
    else
    {
      v448 = 1;
    }
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = v445;
    v822.m256i_i64[2] = v448;
    v822.m256i_i64[3] = v445;
    v787 = 0;
    sub_1401A27E0(&v827, &v799, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    v453 = v780;
    if ( v780 )
      sub_140001660(v773, v780, 1);
    nullsub_1(v450, v453, v451, v452, v709);
    v454 = (_DWORD *)sub_140001650(4, 1);
    if ( !v454 )
      sub_14176E54B(1, 4);
    *v454 = 1701605234;
    v828.m256i_i64[0] = 4;
    v828.m256i_i64[1] = (__int64)v454;
    v828.m256i_i64[2] = 4;
    nullsub_1(v456, v455, v457, v458, v710);
    v459 = sub_140001650(9, 1);
    v780 = (_BYTE *)v459;
    if ( !v459 )
      sub_14176E54B(1, 9);
    *(_QWORD *)v459 = 0x6E61747369737361LL;
    *(_BYTE *)(v459 + 8) = 116;
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = 9;
    v822.m256i_i64[2] = v459;
    v822.m256i_i64[3] = 9;
    sub_1401A27E0(&v827, &v799, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v461, v460, v462, v463, v711);
    v464 = sub_140001650(6, 1);
    if ( !v464 )
      sub_14176E54B(1, 6);
    *(_WORD *)(v464 + 4) = 29557;
    *(_DWORD *)v464 = 1952543859;
    v828.m256i_i64[0] = 6;
    v828.m256i_i64[1] = v464;
    v828.m256i_i64[2] = 6;
    nullsub_1(v466, v465, v467, v468, v712);
    v469 = sub_140001650(9, 1);
    v780 = (_BYTE *)v469;
    if ( !v469 )
      sub_14176E54B(1, 9);
    *(_QWORD *)v469 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v469 + 8) = 100;
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = 9;
    v822.m256i_i64[2] = v469;
    v822.m256i_i64[3] = 9;
    sub_1401A27E0(&v827, &v799, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v471, v470, v472, v473, v713);
    v474 = (_DWORD *)sub_140001650(7, 1);
    if ( !v474 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v474 + 3) = 1953391988;
    *v474 = 1953394531;
    v779.m256i_i64[0] = 7;
    v779.m256i_i64[1] = (__int64)v474;
    v779.m256i_i64[2] = 7;
    nullsub_1(v476, v475, v477, v478, v714);
    v479 = sub_140001650(32, 8);
    if ( !v479 )
    {
      v802 = 1;
      sub_14176E531(8, 32);
    }
    v484 = (_BYTE *)v479;
    v798.m256i_i64[0] = 0;
    v798.m256i_i64[2] = 0;
    nullsub_1(v481, v480, v482, v483, v715);
    v485 = (_DWORD *)sub_140001650(4, 1);
    v780 = v484;
    if ( !v485 )
      sub_14176E54B(1, 4);
    *v485 = 1701869940;
    v828.m256i_i64[0] = 4;
    v828.m256i_i64[1] = (__int64)v485;
    v828.m256i_i64[2] = 4;
    nullsub_1(v487, v486, v488, v489, v716);
    v490 = (void *)sub_140001650(11, 1);
    v773 = (__int64)v490;
    if ( !v490 )
      sub_14176E54B(1, 11);
    qmemcpy(v490, "output_text", 11);
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = 11;
    v822.m256i_i64[2] = (__int64)v490;
    v822.m256i_i64[3] = 11;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v492, v491, v493, v494, v717);
    v495 = (_DWORD *)sub_140001650(4, 1);
    if ( !v495 )
      sub_14176E54B(1, 4);
    *v495 = 1954047348;
    v828.m256i_i64[0] = 4;
    v828.m256i_i64[1] = (__int64)v495;
    v828.m256i_i64[2] = 4;
    if ( v427 < 0 )
    {
      v500 = 0;
      goto LABEL_379;
    }
    v501 = 1;
    if ( !v429 )
    {
      nullsub_1(v497, v496, v498, v499, v718);
      v500 = 1;
      v502 = sub_140001650(v427, 1);
      if ( !v502 )
      {
LABEL_379:
        v786 = 1;
        sub_14176E54B(v500, v427);
      }
      v501 = v502;
      sub_14172B820(v502, v759, v427);
    }
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = v427;
    v822.m256i_i64[2] = v501;
    v822.m256i_i64[3] = v427;
    v786 = 0;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v504, v503, v505, v506, v718);
    v507 = (void *)sub_140001650(11, 1);
    if ( !v507 )
      sub_14176E54B(1, 11);
    qmemcpy(v507, "annotations", 11);
    v828.m256i_i64[0] = 11;
    v828.m256i_i64[1] = (__int64)v507;
    v828.m256i_i64[2] = 11;
    v822.m256i_i64[1] = 0;
    *(_OWORD *)&v822.m256i_u64[2] = 8u;
    v822.m256i_i8[0] = 4;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    *(_OWORD *)((char *)&v822.m256i_u32[1] + 3) = *(_OWORD *)v798.m256i_i8;
    *(__int64 *)((char *)&v822.m256i_i64[2] + 7) = v798.m256i_i64[2];
    v508 = (__int64)v780;
    *v780 = 5;
    v509 = _mm_loadu_si128((const __m128i *)&v822);
    *(_OWORD *)(v508 + 16) = *(_OWORD *)((char *)&v822.m256i_u64[1] + 7);
    *(__m128i *)(v508 + 1) = v509;
    v822.m256i_i64[1] = 1;
    v822.m256i_i64[2] = v508;
    v822.m256i_i64[3] = 1;
    v822.m256i_i8[0] = 4;
    v802 = 0;
    sub_1401A27E0(&v827, &v799, &v779, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    *(__m128i *)&v822.m256i_u64[1] = _mm_loadu_si128(&v799);
    v822.m256i_i64[3] = v800;
    v822.m256i_i8[0] = 5;
    v510 = v770;
    if ( v770 == v768 )
      sub_14172C8D0(&v768);
    v511 = v769;
    v512 = 32LL * (_QWORD)v510;
    v513 = _mm_loadu_si128((const __m128i *)&v822);
    *(__m128i *)(v769 + v512 + 16) = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
    *(__m128i *)(v511 + v512) = v513;
    v770 = (__m128i *)&v510->m128i_i8[1];
    if ( v774 )
      sub_140001660(v759, v774, 1);
  }
  v514 = v760;
  v515 = v761;
  v516 = v762;
  v517 = 32 * v762;
  v822.m256i_i64[0] = v761;
  v822.m256i_i64[2] = v760;
  v822.m256i_i64[1] = v761;
  v822.m256i_i64[3] = v761 + 32 * v762;
  v518 = v770;
  if ( v762 > (char *)v768 - (char *)v770 )
  {
    sub_14172C420((unsigned int)&v768, (_DWORD)v770, v762, 8, 32);
    v518 = v770;
    goto LABEL_396;
  }
  if ( v762 )
LABEL_396:
    sub_14172B820(v769 + 32LL * (_QWORD)v518, v515, v517);
  v770 = (__m128i *)((char *)v518 + v516);
  if ( v514 )
    sub_140001660(v515, 32 * v514, 8);
  v519 = v751;
  if ( v751 )
  {
    v520 = (_QWORD *)(v750 + 8);
    do
    {
      v521 = *(v520 - 1);
      if ( v521 )
        sub_140001660(*v520, v521, 1);
      v520 += 3;
      --v519;
    }
    while ( v519 );
  }
  if ( v749 )
    sub_140001660(v750, 24 * v749, 8);
LABEL_406:
  v522 = sub_1414D4800(aUsage, 5, a2);
  v523 = v522;
  if ( v522 )
  {
    v524 = sub_1414D4800(aInputTokens_0, 12, v522);
    if ( v524 && *(_BYTE *)v524 == 2 && (v525 = *(_QWORD *)(v524 + 8), v525 != 2) )
    {
      if ( (_DWORD)v525 == 1 )
      {
        v526 = *(_QWORD *)(v524 + 16);
      }
      else
      {
        v661 = *(_QWORD *)(v524 + 16);
        v526 = 0;
        if ( v661 > 0 )
          v526 = v661;
      }
    }
    else
    {
      v526 = 0;
    }
    v527 = sub_1414D4800(aCacheReadInput_0, 23, v523);
    if ( v527 && *(_BYTE *)v527 == 2 && (v528 = *(_QWORD *)(v527 + 8), v528 != 2) )
    {
      if ( (_DWORD)v528 == 1 )
      {
        v529 = *(_QWORD *)(v527 + 16);
      }
      else
      {
        v662 = *(_QWORD *)(v527 + 16);
        v529 = 0;
        if ( v662 > 0 )
          v529 = v662;
      }
    }
    else
    {
      v529 = 0;
    }
    v530 = sub_1414D4800(aCacheCreationI_0, 27, v523);
    if ( v530 && *(_BYTE *)v530 == 2 && (v531 = *(_QWORD *)(v530 + 8), v531 != 2) )
    {
      if ( (_DWORD)v531 == 1 )
      {
        v532 = *(_QWORD *)(v530 + 16);
      }
      else
      {
        v663 = *(_QWORD *)(v530 + 16);
        v532 = 0;
        if ( v663 > 0 )
          v532 = v663;
      }
    }
    else
    {
      v532 = 0;
    }
    v533 = sub_1414D4800(aOutputTokens_0, 13, v523);
    if ( v533 && *(_BYTE *)v533 == 2 && (v535 = *(_QWORD *)(v533 + 8), v535 != 2) )
    {
      if ( (_DWORD)v535 == 1 )
      {
        v538 = *(_QWORD *)(v533 + 16);
      }
      else
      {
        v664 = *(_QWORD *)(v533 + 16);
        v538 = 0;
        if ( v664 > 0 )
          v538 = v664;
      }
    }
    else
    {
      v538 = 0;
    }
    v798.m256i_i64[0] = 0;
    v798.m256i_i64[2] = 0;
    nullsub_1(v535, v534, v536, v537, v665);
    v539 = (void *)sub_140001650(12, 1);
    if ( !v539 )
      sub_14176E54B(1, 12);
    v540 = v532 + v526 + v529;
    qmemcpy(v539, "input_tokens", 12);
    v828.m256i_i64[0] = 12;
    v828.m256i_i64[1] = (__int64)v539;
    v828.m256i_i64[2] = 12;
    v822.m256i_i8[0] = 2;
    v822.m256i_i64[1] = v540 >> 63;
    v822.m256i_i64[2] = v540;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v542, v541, v543, v544, v719);
    v545 = (void *)sub_140001650(13, 1);
    if ( !v545 )
      sub_14176E54B(1, 13);
    qmemcpy(v545, "output_tokens", 13);
    v828.m256i_i64[0] = 13;
    v828.m256i_i64[1] = (__int64)v545;
    v828.m256i_i64[2] = 13;
    v822.m256i_i8[0] = 2;
    v822.m256i_i64[1] = v538 >> 63;
    v822.m256i_i64[2] = v538;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    nullsub_1(v547, v546, v548, v549, v720);
    v550 = (void *)sub_140001650(12, 1);
    if ( !v550 )
      sub_14176E54B(1, 12);
    qmemcpy(v550, "total_tokens", 12);
    v828.m256i_i64[0] = 12;
    v828.m256i_i64[1] = (__int64)v550;
    v828.m256i_i64[2] = 12;
    v551 = v540 + v538;
    v822.m256i_i8[0] = 2;
    v822.m256i_i64[1] = v551 >> 63;
    v822.m256i_i64[2] = v551;
    sub_1401A27E0(&v827, &v798, &v828, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    *(_OWORD *)((char *)&v822.m256i_u32[1] + 3) = *(_OWORD *)v798.m256i_i8;
    *(__int64 *)((char *)&v822.m256i_i64[2] + 7) = v798.m256i_i64[2];
    *(__m128i *)&v798.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v822);
    *(_OWORD *)&v798.m256i_u64[2] = *(_OWORD *)((char *)&v822.m256i_u64[1] + 7);
  }
  else
  {
    v798.m256i_i64[1] = 0;
    v798.m256i_i64[3] = 0;
  }
  v798.m256i_i8[0] = 5;
  v552 = sub_1414D4800(aStopReason_0, 11, a2);
  v557 = 1;
  v558 = 9;
  v559 = aCompleted_2;
  if ( !v552 || *(_BYTE *)v552 != 3 )
    goto LABEL_452;
  v554 = *(_QWORD *)(v552 + 16);
  v560 = *(_QWORD *)(v552 + 24);
  if ( v560 == 7 )
  {
    v562 = *(_DWORD *)v554 ^ 0x75666572;
    v553 = v562 | *(_DWORD *)(v554 + 3) ^ 0x6C617375u;
    if ( !(v562 | *(_DWORD *)(v554 + 3) ^ 0x6C617375) )
    {
      v773 = 14;
      v561 = "content_filter";
      goto LABEL_531;
    }
    goto LABEL_452;
  }
  if ( v560 != 29 )
  {
    if ( v560 == 10 )
    {
      v554 = *(_QWORD *)v554 ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(v554 + 8) ^ 0x736ELL;
      if ( !v554 )
        goto LABEL_450;
    }
LABEL_452:
    v561 = nullptr;
    goto LABEL_453;
  }
  if ( _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v554), (__m128i)xmmword_141839D30),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v554 + 13)), (__m128i)xmmword_141839D20))) != 0xFFFF )
    goto LABEL_452;
LABEL_450:
  v773 = 17;
  v561 = aMaxOutputToken_0;
LABEL_531:
  v558 = 10;
  v559 = "incomplete";
  v557 = 0;
LABEL_453:
  v779.m256i_i64[0] = 0;
  v779.m256i_i64[2] = 0;
  nullsub_1(v554, v553, v555, v556, v665);
  v563 = (_WORD *)sub_140001650(2, 1);
  if ( !v563 )
    sub_14176E54B(1, 2);
  *v563 = 25705;
  v828.m256i_i64[0] = 2;
  v828.m256i_i64[1] = (__int64)v563;
  v828.m256i_i64[2] = 2;
  v568 = v735;
  if ( v735 < 0 )
  {
    v569 = 0;
    goto LABEL_456;
  }
  v774 = (__m128i *)v561;
  v570 = v734[1];
  if ( v735 )
  {
    nullsub_1(v565, v564, v566, v567, v721);
    v569 = 1;
    v571 = sub_140001650(v568, 1);
    if ( !v571 )
    {
LABEL_456:
      v785 = 1;
      sub_14176E54B(v569, v568);
    }
    v572 = v571;
    sub_14172B820(v571, v570, v568);
  }
  else
  {
    v572 = 1;
  }
  v822.m256i_i8[0] = 3;
  v822.m256i_i64[1] = v568;
  v822.m256i_i64[2] = v572;
  v822.m256i_i64[3] = v568;
  v785 = 0;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v574, v573, v575, v576, v721);
  v577 = sub_140001650(6, 1);
  if ( !v577 )
    sub_14176E54B(1, 6);
  *(_WORD *)(v577 + 4) = 29795;
  *(_DWORD *)v577 = 1701470831;
  v828.m256i_i64[0] = 6;
  v828.m256i_i64[1] = v577;
  v828.m256i_i64[2] = 6;
  nullsub_1(v579, v578, v580, v581, v722);
  v582 = (_QWORD *)sub_140001650(8, 1);
  v780 = v582;
  if ( !v582 )
    sub_14176E54B(1, 8);
  *v582 = 0x65736E6F70736572LL;
  v822.m256i_i8[0] = 3;
  v822.m256i_i64[1] = 8;
  v822.m256i_i64[2] = (__int64)v582;
  v822.m256i_i64[3] = 8;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v584, v583, v585, v586, v723);
  v587 = (void *)sub_140001650(10, 1);
  if ( !v587 )
    sub_14176E54B(1, 10);
  qmemcpy(v587, "created_at", 10);
  v828.m256i_i64[0] = 10;
  v828.m256i_i64[1] = (__int64)v587;
  v828.m256i_i64[2] = 10;
  v784 = 1;
  sub_14109ED10(&v799);
  v588 = (v799.m128i_i32[0] >> 13) - 1;
  v589 = 0;
  if ( v799.m128i_i32[0] >> 13 <= 0 )
  {
    v590 = (1 - (v799.m128i_i32[0] >> 13)) / 0x190u + 1;
    v588 += 400 * v590;
    v589 = -146097 * v590;
  }
  v822.m256i_i8[0] = 2;
  v822.m256i_i64[1] = ((unsigned __int64)v799.m128i_u32[1]
                     + 86400LL
                     * (((v588 / 100) >> 2)
                      + ((1461 * v588) >> 2)
                      + v589
                      + (((unsigned __int32)v799.m128i_i32[0] >> 4) & 0x1FF)
                      - v588 / 100
                      - 719163)) >> 63;
  v822.m256i_i64[2] = v799.m128i_u32[1]
                    + 86400LL
                    * (((v588 / 100) >> 2)
                     + ((1461 * v588) >> 2)
                     + v589
                     + (((unsigned __int32)v799.m128i_i32[0] >> 4) & 0x1FF)
                     - v588 / 100
                     - 719163);
  v784 = 0;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v592, v591, v593, v594, v724);
  v595 = sub_140001650(6, 1);
  if ( !v595 )
    sub_14176E54B(1, 6);
  *(_WORD *)(v595 + 4) = 29557;
  *(_DWORD *)v595 = 1952543859;
  v828.m256i_i64[0] = 6;
  v828.m256i_i64[1] = v595;
  v828.m256i_i64[2] = 6;
  nullsub_1(v597, v596, v598, v599, v725);
  v600 = sub_140001650(v558, 1);
  v780 = (_BYTE *)v600;
  if ( !v600 )
    sub_14176E54B(1, v558);
  v601 = v600;
  sub_14172B820(v600, v559, v558);
  v822.m256i_i8[0] = 3;
  v822.m256i_i64[1] = v558;
  v822.m256i_i64[2] = v601;
  v822.m256i_i64[3] = v558;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v603, v602, v604, v605, v726);
  v606 = 1;
  v607 = sub_140001650(5, 1);
  if ( !v607 )
    sub_14176E54B(1, 5);
  *(_BYTE *)(v607 + 4) = 108;
  *(_DWORD *)v607 = 1701080941;
  v828.m256i_i64[0] = 5;
  v828.m256i_i64[1] = v607;
  v828.m256i_i64[2] = 5;
  if ( !(_BYTE)v763 )
  {
    nullsub_1(v609, v608, v610, v611, v727);
    v612 = v756;
    v613 = sub_140001650(v756, 1);
    if ( !v613 )
    {
      v783 = 1;
      sub_14176E54B(1, v612);
    }
    v606 = v613;
    sub_14172B820(v613, v752, v612);
  }
  v822.m256i_i8[0] = 3;
  v822.m256i_i64[1] = v756;
  v822.m256i_i64[2] = v606;
  v822.m256i_i64[3] = v756;
  v783 = 0;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v615, v614, v616, v617, v727);
  v618 = sub_140001650(6, 1);
  if ( !v618 )
    sub_14176E54B(1, 6);
  *(_WORD *)(v618 + 4) = 29813;
  *(_DWORD *)v618 = 1886680431;
  v828.m256i_i64[0] = 6;
  v828.m256i_i64[1] = v618;
  v828.m256i_i64[2] = 6;
  v805 = 1;
  sub_140AB4550(&v822, &v768);
  if ( v822.m256i_i8[0] == -1 )
  {
    v827.m256i_i64[0] = v822.m256i_i64[1];
    sub_14176E860(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v827,
      (unsigned int)&off_141851870,
      (__int64)&off_141856560);
  }
  v619 = _mm_loadu_si128((const __m128i *)&v822);
  *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
  *(__m128i *)v827.m256i_i8 = v619;
  v805 = 0;
  sub_1401A27E0(&v822, &v779, &v828, &v827);
  if ( v822.m256i_i8[0] != -1 )
    sub_1401FF690(&v822);
  nullsub_1(v621, v620, v622, v623, v728);
  v624 = (void *)sub_140001650(11, 1);
  if ( !v624 )
    sub_14176E54B(1, 11);
  qmemcpy(v624, "output_text", 11);
  v828.m256i_i64[0] = 11;
  v828.m256i_i64[1] = (__int64)v624;
  v828.m256i_i64[2] = 11;
  v628 = v748;
  if ( v748 < 0 )
  {
    v629 = 0;
    goto LABEL_489;
  }
  v630 = v747;
  if ( v748 )
  {
    nullsub_1(0x745F74757074756FLL, v625, v626, v627, v729);
    v629 = 1;
    v631 = sub_140001650(v628, 1);
    if ( !v631 )
    {
LABEL_489:
      v782 = 1;
      sub_14176E54B(v629, v628);
    }
    v632 = v631;
    sub_14172B820(v631, v630, v628);
  }
  else
  {
    v632 = 1;
  }
  v822.m256i_i8[0] = 3;
  v822.m256i_i64[1] = v628;
  v822.m256i_i64[2] = v632;
  v822.m256i_i64[3] = v628;
  v782 = 0;
  sub_1401A27E0(&v827, &v779, &v828, &v822);
  if ( v827.m256i_i8[0] != -1 )
    sub_1401FF690(&v827);
  nullsub_1(v634, v633, v635, v636, v729);
  v637 = sub_140001650(5, 1);
  if ( !v637 )
    sub_14176E54B(1, 5);
  *(_BYTE *)(v637 + 4) = 101;
  *(_DWORD *)v637 = 1734439797;
  v828.m256i_i64[0] = 5;
  v828.m256i_i64[1] = v637;
  v828.m256i_i64[2] = 5;
  v804 = 1;
  sub_1404B9F30(&v822, &v798);
  if ( v822.m256i_i8[0] == -1 )
  {
    v827.m256i_i64[0] = v822.m256i_i64[1];
    sub_14176E860(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v827,
      (unsigned int)&off_141851870,
      (__int64)&off_141856560);
  }
  v638 = _mm_loadu_si128((const __m128i *)&v822);
  *(__m128i *)&v827.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
  *(__m128i *)v827.m256i_i8 = v638;
  v804 = 0;
  sub_1401A27E0(&v822, &v779, &v828, &v827);
  if ( v822.m256i_i8[0] != -1 )
    sub_1401FF690(&v822);
  *(__m128i *)&v828.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v779);
  v828.m256i_i64[3] = v779.m256i_i64[2];
  v828.m256i_i8[0] = 5;
  if ( !v557 )
  {
    v799.m128i_i64[0] = 0;
    v800 = 0;
    nullsub_1(v640, v639, v641, v642, v730);
    v643 = sub_140001650(6, 1);
    if ( !v643 )
      sub_14176E54B(1, 6);
    *(_WORD *)(v643 + 4) = 28271;
    *(_DWORD *)v643 = 1935762802;
    v779.m256i_i64[0] = 6;
    v779.m256i_i64[1] = v643;
    v779.m256i_i64[2] = 6;
    nullsub_1(v645, v644, v646, v647, v731);
    *((_QWORD *)&v648 + 1) = v773;
    v649 = sub_140001650(v773, 1);
    v763 = (__m128i *)v649;
    if ( !v649 )
      sub_14176E54B(1, *((_QWORD *)&v648 + 1));
    *(_QWORD *)&v648 = v649;
    sub_14172B820(v649, v774, *((_QWORD *)&v648 + 1));
    v822.m256i_i8[0] = 3;
    v822.m256i_i64[1] = *((_QWORD *)&v648 + 1);
    *(_OWORD *)&v822.m256i_u64[2] = v648;
    sub_1401A27E0(&v827, &v799, &v779, &v822);
    if ( v827.m256i_i8[0] != -1 )
      sub_1401FF690(&v827);
    *(__m128i *)&v822.m256i_u64[1] = _mm_loadu_si128(&v799);
    v822.m256i_i64[3] = v800;
    v822.m256i_i8[0] = 5;
    v781 = 1;
    v774 = (__m128i *)sub_1414D4900("incomplete_details", 18, &v828);
    sub_1401FF690(v774);
    v650 = _mm_loadu_si128((const __m128i *)&v822);
    v651 = v774;
    v774[1] = _mm_loadu_si128((const __m128i *)&v822.m256i_u64[2]);
    *v651 = v650;
  }
  v652 = v828.m256i_i8[0];
  v653 = *(__int64 *)((char *)v828.m256i_i64 + 1);
  v654 = *(__int32 *)((char *)&v828.m256i_i32[2] + 1);
  v655 = *(__int16 *)((char *)&v828.m256i_i16[6] + 1);
  v656 = v828.m256i_i8[15];
  v657 = v738;
  *(_OWORD *)(v738 + 16) = *(_OWORD *)&v828.m256i_u64[2];
  *(_BYTE *)v657 = v652;
  *(_QWORD *)(v657 + 1) = v653;
  *(_DWORD *)(v657 + 9) = v654;
  *(_WORD *)(v657 + 13) = v655;
  *(_BYTE *)(v657 + 15) = v656;
  sub_1401FF690(&v798);
  if ( v746 )
    sub_140001660(v630, v746, 1);
  v658 = v769;
  v763 = v770;
  v774 = nullptr;
  v780 = (_BYTE *)v769;
  while ( v763 != v774 )
  {
    v774 = (__m128i *)((char *)v774 + 1);
    v659 = v658 + 32;
    sub_1403FF680();
    v658 = v659;
  }
  if ( v768 )
    sub_140001660(v769, 32LL * (_QWORD)v768, 8);
  if ( v756 )
    sub_140001660(v752, v756, 1);
  if ( v734[0] )
    sub_140001660(v570, v734[0], 1);
  return v738;
}
