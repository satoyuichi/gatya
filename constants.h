//星５鯖
typedef enum {
    //25
    eRANK_FIVE_SERVANT_BEGIN = 0,
    eRANK_FIVE_SERVANT_ALTRIAPENDRAGON = eRANK_FIVE_SERVANT_BEGIN,
    eRANK_FIVE_SERVANT_MODERED,
    eRANK_FIVE_SERVANT_ALTERA,
    eRANK_FIVE_SERVANT_ORION,
    eRANK_FIVE_SERVANT_NICOLATESLA,
    eRANK_FIVE_SERVANT_ARJUNA,
    eRANK_FIVE_SERVANT_CARNA,
    eRANK_FIVE_SERVANT_ELKIDOO,
    eRANK_FIVE_SERVANT_ALTRIAPENDRAGON_LANCER,
    eRANK_FIVE_SERVANT_FRANCISDRAKE,
    eRANK_FIVE_SERVANT_OJIMANDIAZ,
    eRANK_FIVE_SERVANT_MOVE,
    eRANK_FIVE_SERVANT_QUETZALCOULTER,
    eRANK_FIVE_SERVANT_ACHILLES,
    eRANK_FIVE_SERVANT_TAMAMO,
    eRANK_FIVE_SERVANT_ELMEROY,
    eRANK_FIVE_SERVANT_SANZO,
    eRANK_FIVE_SERVANT_CASTORS_OF_THE_NIGHTTIME_CASTLE,
    eRANK_FIVE_SERVANT_ANASTACIA,
    eRANK_FIVE_SERVANT_JACK_THE_RIPPER,
    eRANK_FIVE_SERVANT_OSAKABE,
    eRANK_FIVE_SERVANT_VLADO,
    eRANK_FIVE_SERVANT_NIGHTINGALE,
    eRANK_FIVE_SERVANT_KOOFULINORUTA,
    eRANK_FIVE_SERVANT_JEANNE_DARC, /* 25 */
    eRANK_FIVE_SERVANT_END,			/* 26 */

    eRANK_FIVE_SERVANT_MAX = eRANK_FIVE_SERVANT_END, /* 26 */

	//星４鯖
    //48
    eRANK_FOR_SERVANT_BEGIN = eRANK_FIVE_SERVANT_MAX, /* 26 */
    eRANK_FOR_SERVANT_ALTRIAPENDRAGONORUTA = eRANK_FOR_SERVANT_BEGIN, /* 26 */
    eRANK_FOR_SERVANT_NRO,		/* 27 */
    eRANK_FOR_SERVANT_GAWEIN,	/* 28 */
    eRANK_FOR_SERVANT_ZIIKU,
    eRANK_FOR_SERVANT_RARMA,
    eRANK_FOR_SERVANT_RANSROT,
    eRANK_FOR_SERVANT_SYUBARIE,
    eRANK_FOR_SERVANT_SUZUKA,
    eRANK_FOR_SERVANT_EMIYA,
    eRANK_FOR_SERVANT_ATARANTE,
    eRANK_FOR_SERVANT_TORISTAN,
    eRANK_FOR_SERVANT_ARTYARINFERNO,
    eRANK_FOR_SERVANT_KEIRORN,
    eRANK_FOR_SERVANT_VURAD,
    eRANK_FOR_SERVANT_ERIZABEET,
    eRANK_FOR_SERVANT_FIN,
    eRANK_FOR_SERVANT_RISYOBUN,
    eRANK_FOR_SERVANT_ALTRIA_ORUTA_RANCER,
    eRANK_FOR_SERVANT_MEDUSA,
    eRANK_FOR_SERVANT_PEARL_VERTY,
    eRANK_FOR_SERVANT_NATA,
    eRANK_FOR_SERVANT_ASTOLPHO,
    eRANK_FOR_SERVANT_ANN_BONNIE_MARY_LEAD,
    eRANK_FOR_SERVANT_MARIE_ANTOINETTE,
    eRANK_FOR_SERVANT_MALTA,
    eRANK_FOR_SERVANT_NURSERY_RHYME,
    eRANK_FOR_SERVANT_NITOKURISU,
    eRANK_FOR_SERVANT_MEDIA_LILY,
    eRANK_FOR_SERVANT_GILGAMESH,
    eRANK_FOR_SERVANT_ELENA_BRAVATSKY,
    eRANK_FOR_SERVANT_THOMAS_EDISON,
    eRANK_FOR_SERVANT_OCEANOS_CASTER,
    eRANK_FOR_SERVANT_STENO,
    eRANK_FOR_SERVANT_EMIYA_ASSASSIN,
    eRANK_FOR_SERVANT_CARMILLA,
    eRANK_FOR_SERVANT_ASSASSIN_OF_SHINJUKU,
    eRANK_FOR_SERVANT_ASSASSIN_OF_THE_MIDNIGHT_CASTLE,
    eRANK_FOR_SERVANT_ASSASSIN_PARAISO,
    eRANK_FOR_SERVANT_HERCULES,
    eRANK_FOR_SERVANT_LANCELOT,
    eRANK_FOR_SERVANT_FRANKENSTEIN,
    eRANK_FOR_SERVANT_BEOWULF,
    eRANK_FOR_SERVANT_TAMAMO_CAT,
    eRANK_FOR_SERVANT_IBARAKI,
    eRANK_FOR_SERVANT_BERSERKER_OF_ELDORADO,
    eRANK_FOR_SERVANT_ATALANTE_OORTA,
    eRANK_FOR_SERVANT_GORGON,
    eRANK_FOR_SERVANT_AVENGER_OF_SHINJUKU, /* 26 + 49 */
    eRANK_FOR_SERVANT_END, /* 26 + 49 */

    eRANK_FOR_SERVANT_MAX = eRANK_FOR_SERVANT_END - eRANK_FOR_SERVANT_BEGIN, /* 49 */

    //37
    eRANK_THREE_SERVANT_BEGIN = eRANK_FOR_SERVANT_END,
    eRANK_THREE_SERVANT_BEDIVIERE = eRANK_THREE_SERVANT_BEGIN,
    eRANK_THREE_SERVANT_GAIUS_JULIUS_CAESAR,
    eRANK_THREE_SERVANT_FERGUS_MAC_ROY,
    eRANK_THREE_SERVANT_JILL_DE_LE,
    eRANK_THREE_SERVANT_ROBIN_HOOD,
    eRANK_THREE_SERVANT_DAVID,
    eRANK_THREE_SERVANT_BILLY_THE_KID,
    eRANK_THREE_SERVANT_EURIALE,
    eRANK_THREE_SERVANT_TAWARA,
    eRANK_THREE_SERVANT_CHILD_GILL,
    eRANK_THREE_SERVANT_KOO_FU_LIN,
    eRANK_THREE_SERVANT_DILMUD_ODINA,
    eRANK_THREE_SERVANT_KOO_FULIN_PROTOTYPE,
    eRANK_THREE_SERVANT_ROMULUS,
    eRANK_THREE_SERVANT_HOUZOUIN,
    eRANK_THREE_SERVANT_HECTOR,
    eRANK_THREE_SERVANT_JAGUAR_MAN,
    eRANK_THREE_SERVANT_MEDUSA,
    eRANK_THREE_SERVANT_BOODICA,
    eRANK_THREE_SERVANT_USIWAKA,
    eRANK_THREE_SERVANT_ALEXANDER,
    eRANK_THREE_SERVANT_MEDIA,
    eRANK_THREE_SERVANT_JILL_DE_LE_KYASTER,
    eRANK_THREE_SERVANT_VAN_HOHENHEIM_PARACELSUS,
    eRANK_THREE_SERVANT_CHARLES_BABBAGE,
    eRANK_THREE_SERVANT_MEPHISTOPHERES,
    eRANK_THREE_SERVANT_JERONIMO,
    eRANK_THREE_SERVANT_KOO_FULIN_CASTER,
    eRANK_THREE_SERVANT_AVICEVLON,
    eRANK_THREE_SERVANT_HASAN_OF_THE_GREATEST_APPEARANCE,
    eRANK_THREE_SERVANT_HENRY_JEKYLL_HYDE,
    eRANK_THREE_SERVANT_HASAN_OF_CALM,
    eRANK_THREE_SERVANT_KEIKA,
    eRANK_THREE_SERVANT_HUMAKOTAROU,
    eRANK_THREE_SERVANT_ROHU,
    eRANK_THREE_SERVANT_DARIOS_III,
    eRANK_THREE_SERVANT_KIYOHIME,
    eRANK_THREE_SERVANT_END,

    eRANK_THREE_SERVANT_MAX = eRANK_THREE_SERVANT_END - eRANK_THREE_SERVANT_BEGIN,

	//星５礼装
    //18
    eRANK_FIVE_REISOU_BEGIN = eRANK_THREE_SERVANT_END,
    eRANK_FIVE_REISOU_FORMAL_CRAFT = eRANK_FIVE_REISOU_BEGIN,
    eRANK_FIVE_REISOU_IMAGINARY_AROUND,
    eRANK_FIVE_REISOU_LIMITED_ZERO_OVER,
    eRANK_FIVE_REISOU_KALEIDOSCOPE,
    eRANK_FIVE_REISOU_HEAVENS_FEEL,
    eRANK_FIVE_REISOU_PRISMAS_COSMOS,
    eRANK_FIVE_REISOU_BLACK_HOLY_GRAIL,
    eRANK_FIVE_REISOU_WINNER_OF_THE_MONTH,
    eRANK_FIVE_REISOU_ANOTHER_ENDING,
    eRANK_FIVE_REISOU_A_PIECE_IN_2030,
    eRANK_FIVE_REISOU_FIVE_HUNDRED_YEARS_OF_DECEPTION,
    eRANK_FIVE_REISOU_SAINTS_COST,
    eRANK_FIVE_REISOU_IDEAL_KING,
    eRANK_FIVE_REISOU_MENSTRUAL_SPINAL_FLUID,
    eRANK_FIVE_REISOU_BEFORE_AWAKE,
    eRANK_FIVE_REISOU_ORIGIN_BULLET,
    eRANK_FIVE_REISOU_MAGICAL_BODHISATTVA,
    eRANK_FIVE_REISOU_IN_THE_SUNNY_POOL,
    eRANK_FIVE_REISOU_END,

    eRANK_FIVE_REISOU_MAX = eRANK_FIVE_REISOU_END - eRANK_FIVE_REISOU_BEGIN,

	//星４礼装
    //26
    eRANK_FOR_REISOU_BEGIN = eRANK_FIVE_REISOU_END,
    eRANK_FOR_REISOU_STEEL_TRAINING = eRANK_FOR_REISOU_BEGIN,
    eRANK_FOR_REISOU_PRIMITIVE_SPELL,
    eRANK_FOR_REISOU_PROJECTION_MAGIC,
    eRANK_FOR_REISOU_GAND,
    eRANK_FOR_REISOU_GREEN_DISRUPTIVE_SOUND,
    eRANK_FOR_REISOU_JEWEL_MAGIC_CONTRARY,
    eRANK_FOR_REISOU_ELEGANT,
    eRANK_FOR_REISOU_IMAGINARY_MAGIC,
    eRANK_FOR_REISOU_HEAVENLY_SUPPER,
    eRANK_FOR_REISOU_ANGELS_POETRY,
    eRANK_FOR_REISOU_SEAL_DESIGNATION_ENFORCER,
    eRANK_FOR_REISOU_THE_SANCTUARY_OF_MAGDALA,
    eRANK_FOR_REISOU_A_SINGLE_SWORD,
    eRANK_FOR_REISOU_CODE_CAST,
    eRANK_FOR_REISOU_KNIGHTS_HOLDING,
    eRANK_FOR_REISOU_SPIRIT_MAGIC,
    eRANK_FOR_REISOU_INTENTION_TO_WAKE_UP,
    eRANK_FOR_REISOU_MILLENNIAL_GOLDEN_TREE,
    eRANK_FOR_REISOU_RECORD_HOLDER,
    eRANK_FOR_REISOU_A_VIPER_SNAKE,
    eRANK_FOR_REISOU_THE_ART_OF_DEATH,
    eRANK_FOR_REISOU_SOFT_COMPASSION,
    eRANK_FOR_REISOU_LOVELESS_DAUGHTER,
    eRANK_FOR_REISOU_AIDING_SHOOTING,
    eRANK_FOR_REISOU_ROOM_GIRDER,
    eRANK_FOR_REISOU_THE_LAST_STORYTELLER,
    eRANK_FOR_REISOU_END,

    eRANK_FOR_REISOU_MAX = eRANK_FOR_REISOU_END - eRANK_FOR_REISOU_BEGIN,

	//星３礼装
    //22
    eRANK_THREE_REISOU_BEGIN = eRANK_FOR_REISOU_END,
    eRANK_THREE_REISOU_TEMPLE = eRANK_FOR_REISOU_BEGIN,
    eRANK_THREE_REISOU_LOVE_MEDICINE,
    eRANK_THREE_REISOU_BRONZE_MANIPULATOR,
    eRANK_THREE_REISOU_ATOGAURA,
    eRANK_THREE_REISOU_HYDOR_DAGGER,
    eRANK_THREE_REISOU_PASS_AWAY_AND_DREAM,
    eRANK_THREE_REISOU_SPICY_MABO_TOFU,
    eRANK_THREE_REISOU_JEWEL_SWORD_ZERERETCH,
    eRANK_THREE_REISOU_BATTLE_OF_CAM_RAN,
    eRANK_THREE_REISOU_FLAGARAC,
    eRANK_THREE_REISOU_MOON_IN_THE_SKY,
    eRANK_THREE_REISOU_INTRINSIC_BARRIER,
    eRANK_THREE_REISOU_REJUVENATING_SPIRIT,
    eRANK_THREE_REISOU_MYSTERY_MASKS,
    eRANK_THREE_REISOU_FREELANCER,
    eRANK_THREE_REISOU_BASILICA_OF_RUBBLE,
    eRANK_THREE_REISOU_MORNING_SEASON_SHINJI,
    eRANK_THREE_REISOU_ATLAS_INSTITUTE,
    eRANK_THREE_REISOU_ILLUSION_SPECIES,
    eRANK_THREE_REISOU_GOD_SHELLING_ARMOR,
    eRANK_THREE_REISOU_EATING_SOUL,
    eRANK_THREE_REISOU_WISDOM_LIGHT,
    eRANK_THREE_REISOU_END,

    eRANK_THREE_REISOU_MAX = eRANK_THREE_REISOU_END - eRANK_THREE_REISOU_BEGIN,

	eRANK_TOTAL = eRANK_FOR_SERVANT_END,
} eRANK_TYPE;

const char* strServantNames [] = {
    //25
    "アルトリア・ペンドラゴン",
    "モードレッド",
    "アルテラ",
    "オリオン"
    "ニコラ・テスラ",
    "アルジュナ",
    "カルナ",
    "エルキドゥ",
    "アルトリア・ペンドラゴン[ランサー]",
    "フランシス・ドレイク",
    "オジマンディアス",
    "女王メイヴ",
    "ケツァル・コアトル",
    "アキレウス",
    "玉藻の前",
    "諸葛孔明[エルメロイII世]",
    "玄装三蔵",
    "不夜城のキャスター",
    "アナスタシア",
    "ジャック・ザ・リッパー",
    "刑部姫",
    "ヴラド三世",
    "ナイチンゲール",
    "クー・フーリン[オルタ]",
    "ジャンヌ・ダルク",

    //48
    "アルトリア・ペンドラゴン[オルタ]",
    "ネロ・クラウディウス",
    "ガウェイン",
    "ジークフリート",
    "ラーマ",
    "ランスロット",
    "シュヴァリエ・デオン",
    "鈴鹿御前",
    "エミヤ",
    "アタランテ",
    "トリスタン",
    "アーチャー・インフェルノ",
    "ケイローン",
    "ヴラド三世[EXTRA]",
    "エリザベート・バートリー",
    "フィン・マックール",
    "李書文",
    "アルトリア・ペンドラゴン[オルタ ランサー]",
    "メドゥーサ",
    "パールヴァティー",
    "哪吒",
    "アストルフォ",
    "アン・ボニー＆メアリー・リード",
    "マリー・アントワネット",
    "マルタ",
    "ナーサリー・ライム",
    "ニトクリス",
    "メディア[リリィ]",
    "ギルガメッシュ",
    "エレナ・ブラヴァツキー",
    "トーマス・エジソン",
    "オケアノスのキャスター",
    "ステンノ",
    "エミヤ[アサシン]",
    "カーミラ",
    "新宿のアサシン",
    "不夜城のアサシン",
    "アサシン・パライソ",
    "ヘラクレス",
    "ランスロット",
    "フランケンシュタイン",
    "ベオウルフ",
    "タマモキャット",
    "茨木童子",
    "エルドラドのバーサーカー",
    "アタランテ[オルタ]",
    "ゴルゴーン",
    "新宿のアヴェンジャー",

    //37
    "ベディヴィエール",
    "ガイウス・ユリウス・カエサル",
    "フェルグス・マック・ロイ",
    "ジル・ド・レェ[セイバー]",
    "ロビンフッド",
    "ダビデ",
    "ビリー・ザ・キッド",
    "エウリュアレ",
    "俵藤太",
    "子ギル",
    "クー・フーリン",
    "ディルムッド・オディナ",
    "クー・フーリン[プロトタイプ]",
    "ロムルス",
    "宝蔵院胤舜",
    "ヘクトール",
    "ジャガーマン",
    "メドゥーサ",
    "ブーディカ",
    "牛若丸",
    "アレキサンダー",
    "メディア",
    "ジル・ド・レェ[キャスター]",
    "ヴァン・ホーエンハイム・パラケルスス",
    "チャールズ・バベッジ",
    "メフィストフェレス",
    "ジェロニモ",
    "クー・フーリン[キャスター]",
    "アヴィケブロン",
    "百貌のハサン",
    "ヘンリー・ジキル＆ハイド",
    "静謐のハサン",
    "荊軻",
    "風魔小太郎",
    "呂布奉先",
    "ダレイオス三世",
    "清姫",

    //18
    "フォーマルクラフト",
    "イマジナリ・アラウンド",
    "リミテッド・ゼロオーバー",
    "カレイドスコープ",
    "ヘブンズフィール",
    "プリズマコスモス",
    "黒の聖杯",
    "月の勝利者",
    "もう一つの結末",
    "2030年の欠片",
    "五百年の妄執",
    "聖者の依り代",
    "理想の王聖",
    "月霊髄液",
    "目醒め前",
    "起源弾",
    "魔性菩薩",
    "陽だまりの中で",

    //26
    "鋼の鍛錬",
    "原始呪術",
    "投影魔術",
    "ガンド",
    "緑の破音",
    "宝石魔術・対影",
    "優雅たれ",
    "虚数魔術",
    "天の晩餐",
    "天使の詩",
    "封印指定　執行者",
    "マグダラの聖骸市",
    "一の太刀",
    "コードキャスト",
    "騎士の矜持",
    "死霊魔術",
    "目覚めた意思",
    "千年黄金樹",
    "レコードホルダー",
    "毒蛇一芸",
    "死の芸術",
    "柔らかな慈愛",
    "恋知らぬ令嬢",
    "援護射撃",
    "ルームガーダー",
    "最後の語り部",

    //22
    "柳洞寺",
    "愛の霊薬",
    "ブロンズ・マニピュレーター",
    "アトゴウラ",
    "ヒュドラー・ダガー",
    "過ぎ去りし夢",
    "激辛麻婆豆腐",
    "宝石剣ゼルレッチ",
    "カムランの戦い",
    "フラガラック",
    "天の逆月",
    "固有結界",
    "若返りの霊薬",
    "謎の仮面群",
    "フリーランサー",
    "瓦礫の聖堂",
    "まるごしシンジ君",
    "アトラス院",
    "幻想種",
    "神造兵装",
    "魂喰い",
    "叡智の光",
};