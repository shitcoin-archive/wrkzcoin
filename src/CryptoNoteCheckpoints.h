// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{0,"877e55b4e902b9bf4c9e0a7c16440f449339d56679c49d62261ae5c92596a6ce"},
{100,"ac79baed856a44531af0da18b64c9c77ae4acd707962fb6f15905bd54804e3f3"},
{200,"cc29fbe9214b87e7bb29050160e5e5f3af8a795d7319fe3d254491299cbc00ba"},
{300,"c2b509b586b46c6f852a000a0ebf21db6054c2520cd0148590ff1c1d4331c8bf"},
{400,"3a97e6da2856a4a464f34ad87792a97e9fb4af3b3424fd562b7d99d6a3a101d3"},
{500,"8a7d72e82fa4104cd3fa00349e84148d7948a007ac2f62d53507d8939e8e0fea"},
{600,"b41f84f73af9320314d549d8a55b602c9940df228830ac0143e3806970c11566"},
{700,"cc7b71833be640dfafabc9df0a7ef222e1f13e170159698c3d2c35d544cfa429"},
{800,"bc735359a237982bb2f1ff9eb56e21fc2a7aa657e06b4d1ed8ff265ad5a984c2"},
{900,"7650b6b77a203394a2c8d9254d957f78f91dae0d97903201c229db105c3b83ec"},
{1000,"c9e495bff601f44e4ca60ce4d00d485ad8bd2667a6aef75d70d8416d38a99cda"},
{2000,"57abdcc64975e704c0fcf26100d1f68a60cabea02e5fb0ec57c3658662f77869"},
{3000,"651be4161f06a96eedae077c6b05af879c7b8d8ff72312c81b519ee10375dd74"},
{4000,"563c0d3b745836f214d5cee483b25e7a3e978b4dae4e4b464b956afed3d3f032"},
{5000,"a17de196aaf1fd574bddd58ccb8c167bff3d549a00f5d8c5da1b459bbedbcc51"},
{6000,"1962ffb8a45716e1ad0af0fd593ed739f6b222bd9f0df833ebe90fc6abb57427"},
{7000,"1a554b0534a4afe3ad86793542a5e3717d907282c8b115ddb4f1c773d4cdbb30"},
{8000,"80991425d3dda0c6d159a72eaabe726b30c03dfdec4657568b2c274b6bcd3a60"},
{9000,"adc6adc88de77daba831fabdbe11b87c00880ad04b662dd84c112a18c03e857f"},
{10000,"2c99b62958b0e05804249bab026847b8f7f5b01c925122db3ec198cff10590d1"},
{11000,"5e844d328dd708ffe616ae9f0a88469303bb9505da66d81e6682f6e7d0c760c7"},
{12000,"382b5545090e26ba702b83806afb2ba95a8845c3b4a9b4bb5509f2afa3f82aae"},
{13000,"cb706499b175e49fb4fa50706c1c7dc8cd60a1cf602fb852ba00807a11205a31"},
{14000,"e7af87ad0b4605dcd57807eecc50c3d1f69c1f6c21d2da08b1f035f66a540f89"},
{15000,"74c0c3695d4a7305d6577f80ba4790500fe324689d59b0fae7022180098a21d1"},
{16000,"876aef492c0b1bbae4f6a5c27bb3de5b918bd6c22a5db54e1adaf19b7bbcb631"},
{17000,"8e2e4464182b7001a5dd2577d333faa9c6838f6d7abec69ea8571a32aae30253"},
{18000,"08df66d35a8e537b467d7c030bdefcd397a9025715807bb8235bce221c150033"},
{19000,"1d2a4ba2991b4bcfcea4984094a398fe6895c90a943184f0a1f0852ff2b3fca7"},
{20000,"72790e675dd68ac369af99058b962169a22c19308e783b9045a2071f292ef09d"},
{21000,"f0ee9c1724bbde155bac7f9d5f290eda64fc4202f26243b643d46323fc55618d"},
{22000,"07ba82ca8a0ce58689df2a39e4e4699ec43fab91112fd0fb54609c2feef12b54"},
{23000,"9e3910180614c1eecbdc13947b43735734ededd10b2554500d13027420449136"},
{24000,"7456869e7b67cc126db204f2318a07a9acc778d55a1f12952e8c88d5d4e13935"},
{25000,"80ce89f332f1437c7eb3ec82aff3762aa1ce468cc80feb6c40f5490bb7d2c2bc"},
{26000,"b1d396aa8f42179720bab3dae3c212bfcc1f67e98f4da7bf95b082a66e47ce5e"},
{27000,"31d7d59eca8fff2906651d2ade5f637cb3012679d5b713a3078343a568f3f238"},
{28000,"2be22ec9c0e9add57d83daa910b9f12fd492195e3521c4b8dc247b494f4b1dcc"},
{29000,"0b215b0b15e9edea2cd60a7644ee79b2f34e994446369c0b810935a7a6071dec"},
{30000,"7285e80545b1fdaf88baa0a36a870946d3b614b67d33a7c2459f38dbb323b8d6"},
{31000,"5bcf66ae338af1af8fa22e11387dd018b951b79932b9f5df0d5ea714097803a2"},
{32000,"58253dddf5f3f2189eefcd1160f4d69298b392505e28a3803399e533401a5311"},
{33000,"a3883d31271caadb1454b308a7338713e554d53ebdcb9a0760ef025ad5b45075"},
{34000,"c2434a82aaaf3e35193409975edfca803a235dcae044c764e77fc6fa25113f0d"},
{35000,"e078b2ac10c23de9346b908751a1826ebd63e4323eaefd6da0ea8fcf07867ad5"},
{36000,"9496c62569d93490a00561a6df93627fa118d388d9d1cac4f2033adef605db92"},
{37000,"efc3c0f0e1fba96eb7aba61677bf9b238070870673a5855b47556c52f8220f4b"},
{38000,"19bc317878914cdedc5a6a3dd1d89956d4a0c0793391f6861c055d4d712de335"},
{39000,"96b96c84ea5f85e74a6394a09318ea646126b5d27741b7afd38f5ff3353bf262"},
{40000,"3b9418425260a9b8117c75bf915fa4bc3db27129f4ad100855b3333fb4ae5bd2"},
{41000,"5c1c7c2ddfedc618137a4f7cfef55fea6934b5fe6d75f9e050dc7986253d9e76"},
{42000,"ac02beadab5dbf3fa0366c739b7840a071428cad694c1b8a837eb4001880cb26"},
{43000,"3798444542d8cca911de4dbb26bb312c2645121c61e415116c390b2042aeb494"},
{44000,"fb71a34b07e5deb7983b1fd9cdc080560c4aeb92f303a644d2f4ea369e92565b"},
{45000,"94093218fb89b9ed7eef75b79f49e6d5bed9ca100a172a604d46d9cff4821595"},
{46000,"4edf4494cfd7ebede6ccdfde570c73391b728206d390ba5d9e68b2080eebee55"},
{47000,"cc540bef696467bc27ac8c2977c42c5a9dce4695222376fb0459161f4365ba32"},
{48000,"1afd53046709254520f90e4f2cb94e69c8bde596c7958f03fa595f03ab73d527"},
{49000,"6d08abc0a13bd2113f3a1708a916042f70f88570ce1156976e4aabf1a75b8388"},
{50000,"6dded54823e3302035f4044b29fc302971df36a86c13ce51a8882a9c9e953b68"},
{51000,"73eb41ed2545fb0cd2e9e82015f54da254d9f21093201d63a6d09a2c32b41a2a"},
{52000,"be084fa3b4f3cada9a037660f4bb2f480a6772c568bfc26b330868a04af4d8ee"},
{53000,"94488fab1f46daef70c985326660233ecb4e1ea959fb2591d362c984a9ded32d"},
{54000,"88c13682d9e5a90cee5f4801ac1f92e13eb78e43ed11cba9e5a2451f91681c49"},
{55000,"f809319dc873beced66941f185de2f42585f53fdeb030aa473f55f19549a7bec"},
{56000,"ef915907314196110680766807e1f993dffb3993b58b3e034b882bf6cd3ab2f5"},
{57000,"808cf7d9f203614352f6d1af05377c8160137be8d8ce74b2bdb94270aab28ad8"},
{58000,"ea1b6ead70eaba237396658d3df82a54824d60bcee9fba91f81e498f1ba819d2"},
{59000,"5df7e695946538795ac81eda555736c26f88b7dc2162a3b6b1af160f29ee61ce"},
{60000,"917d92d59b4ea2f60f046666cf36bf90fa1df871aebf8ff3b164cd6f62869499"},
{61000,"83781ff5949aa55987608e375a6b6362000c3a901bafa6229d6c816c28cc3720"},
{62000,"be197fd0038cdf0c3fad7bf1b17972061c602565b08f4df3875357eee0964d42"},
{63000,"6f7225ffb3db14ae5706b343ef44d2ef9a1f9c379b21a0d0f380f5b3df000ce0"},
{64000,"f669bf1522dfdb292bac0a229c672458929256633a280087b6ada485a4409181"},
{65000,"7ecaa8bafe4f91aeda9f2f3eb8a4fb3868af65607f06ad283c67889520fd798c"},
{66000,"ff8b6e2af6a21cfa76c764fefce6f932913a1a2feb6e8ec00a25cea1640f02aa"},
{67000,"545d9ff74b93a263e1963ff3ff6196e67750eed6414df03358292330476a12ef"},
{68000,"a52c5d1b77fab897ff6c51a02165d2d5c6e843651d13f21332a8a523ac690b95"},
{69000,"bb37384f3e675b306594fe0874d8576eb48cc90b0111b76b78ca20318c9d7c46"},
{70000,"0eae1266f5f8db19daa41247436cf6e2ecefea07ff695ec8f69798e1d461ceaf"},
{71000,"5eec16bf217fd3361ae857d0177f55d0ef2e76147940ca937b5f748e72ff064e"},
{72000,"9cd331642b1c8963767523a2da99212035823c13c9538ef27a86c4ea3755780e"},
{73000,"fae6c0a87914bfea73dbff5c6043fcf7dd8964ca63a328121d33f4302e22a1a9"},
{74000,"06d7486c2311fe3736569f067178bd88e20673f5b74bfd1cfc61c0cad8bc20b8"},
{75000,"8fbc27f314d861822d9d069b721fe850d5e881cd03cc2f9cd18e23d000b48164"},
{76000,"2c6282665a082bda9f7c440096c2278577212a70fef7313bcb964cb9ea1b307c"},
{77000,"a2d2555672979488e80aa2b0dad76dc126960f613490552e367d381892977012"},
{78000,"c5afb39e4b99f3ca643341e6ea1d82f3b245d31e0ac9f4c036a2680055dddd45"},
{79000,"e95b4b315586cb6e53d017ee4ec87c554b3a617c91883ce0e7461ec3f04b3009"},
{80000,"31e1ed21e54a652186ebe5b13adbb8508ffc6d6d8902e678146fd0910f8b9f01"},
{81000,"2b7da029e4a1a9b4e285a21fcba87fb8c49a5c69335b23785df2f4513f092e41"},
{82000,"f05476fbb1db280ca79cb5c5528df06d1ee7244bc48c28b664a5dac28b2720a6"},
{83000,"3ea00a29e4bbf6fcc93ee023f7b5fccf007434211964effb58baa9f910d49d6b"},
{84000,"c07bcc44f7f6bb18e8b44da64b82ce53860a70ba8fd569bfc9e2102429fd9f18"},
{85000,"c6ce8a56ddaf311f4156a0c587c19fba783fa6474110819d6aaad6b6aff05fac"},
{86000,"3ca1c0d47e031b7e9aebf3ddbd61f99bde2bae9e8d2be56ae5e34cf2581e5f09"},
{87000,"50fe61beeb837545881f690e1419d882ce657b5839594081d5916fdac4b9d70f"},
{88000,"aba577bcfdf3c5297bf969d9c3c558a45a5d2f3fb28223352c311dc38ce0e934"},
{89000,"9560d5ff9487858f2a08ea4fa594fe939ef5605ab79569b586c0df445c45f55f"},
{90000,"e8d11168fe6a7e81b0c271edb6fcd596fd15f0587cdbeeace514fb9c674cd264"},
{91000,"56cf105060f56e1588413fceec4730b4a6916da0a9e43345f8ee2e4709d794a4"},
{92000,"f82239bb793ce4055d294d2cc477d29d53913fbb6bb23dd16c0caeec74b4e709"},
{93000,"4a0d3bbaaa7ab44fc8fd42387719ca66ae6ed87e45b9cee4181d727c3b39728b"},
{94000,"3ede2ae44a5d043193b39280ae4ef7988683914c19f14b5b0b82275cd414932e"},
{95000,"416adaedce225c5b828cf06d1f0a0b39dc2aa033042d0fb984535c805b576f80"},
{96000,"d85e98002058d65e6e3465ad7093d6da709994a1b5e8eefceeb9a5fad2cfa756"},
{97000,"5ee14af91d1b623e11b3e176cebe9681b353c0b01dafeab7b5c046bdb72b744a"},
{98000,"895a56504e5ae5fa0b8a2ac39588eda3f6abc68fb578fe078591f79cb612b242"},
{99000,"a8ea7c3bb08e83eba8f90f8b4695671928146c96203d9eacf94a940163cc9acd"},
{100000,"c0b404b934853ea85bef3ab4a7a7ef5b4ce44eb31c4678500f7daccf64b20cd2"},
{101000,"35d82208037de138056a4e530b3629f7f2b66427db0f1b8f7562ab07caad6f66"},
{102000,"ef745c72ed66c1da12e73cab839651c915db785081a268036a2d4d9660321b0a"},
{103000,"fa2be00c8a2a71aec5693e60f13683e80fa810544b9af83e84888560167bc6b3"},
{104000,"edf4ac69cf3e31c3ffb6f8045d955b61ee7a8db2b768f9e1ce1cea99c4cf8edd"},
{105000,"2dd0f3b7a8f26c19222b873e91594bf912fe52b1fa5bb5d952305d63a5b8561f"},
{106000,"698a94416e3aaddc4094a977f66a4e3164312d37d51c880b53e629983f226071"},
{107000,"0acd3cba4a84303a8ea7d2962756687bfee5726f7415ee525c1fed563735e497"},
{108000,"708511ae61dea1db48227a9d67b3e9184a3f3a8d9a903a4bbdedec18b24ac86e"},
{109000,"fcb7492246c1b5574fc468ae782ec03e016c11e7c7b3b5aee8d293d11f51f85f"},
{110000,"62b3f55ef6ccbb3b5b54a419571698527e7f2f49e609a4b43001a0a7f5720cbd"},
{111000,"cf77569f78593ab319919fed026b19dfe601d01d4c5ea0b5af22f7b88cb66ce0"},
{112000,"c5ad23e483c976575ca7daa3d902a96bd3b17ade8198627ed0fc669b919e26fa"},
{113000,"6d43c46b4e5c3fa976c8321aca2bc5cb05d96b82dca2e47fe0fd066cd54d1c88"},
{114000,"0aabea02b7c535c357d0de41df0678b08692e5c012c40a55422779c91567da4d"},
{115000,"fcef00fe422f54fadb3937c671d55068bc478e14f5881355974122f4db049977"},
{116000,"19645487ad21f3f3a918a4380abf485efeba09164e274ead555185b8f8c5648c"},
{117000,"ad69965327ecb59e51a4c86b72ceb8e4a58798b038acc3bf4c3ebf4dc9ecd81b"},
{118000,"a13557b6abd8d30945b8f782f1e8d432b3d6b6066b08f5612b9f9f68a265c367"},
{119000,"e1cb6990c7d3a0e3fe1f3615c96bd17d48fe5d8a2717bc32240c3445532428fd"},
{120000,"a965139df58ddfda6d4ce77f2628d5e53eefebf826d4f91a4addfe82c6954304"},
{121000,"db37fbd8f0f7552cb11fd7feec5ecc8ff33485cbf3d50d2fbb3df09af35f8af6"},
{122000,"347c4b527d1ce6725c085efcf36e73c4cf4b63a54696feebc38faf80b50d159b"},
{123000,"b7d2e11dd0c8505b08da21725b77a8431a8909094f00a827cb3a7a78b0944c44"},
{124000,"03243e44ddc91a6ab3e46af07053f222f9745abb33da45c2f99231007f7593bf"},
{125000,"71d163ee7e6e4a210736a38dda25deaa50b60e4e9f38577b7572417bc6edeb8f"},
{126000,"a5a5694354c3380d586a74e75dd303570a9adbef876d60d7bef60c86d459c31c"},
{127000,"a5e40e8c859d63b40b25cb56a1e113ce7dbac45049d2826cff6306de96eb7ee5"},
{128000,"3df3e1a5074ed98ac2ca7ebc94b81823276c1d2ed5141ff3b6255f8d4836f712"},
{129000,"ad353fefa28171d04a9e10786cea49a105dcf7841edee9870346db574261c761"},
{130000,"823c5b0cb138c01c341a629a26c84eaabaab54bbfc32b610ad45a9de75dab7a7"},
{131000,"73ea93052a200a6f4907edad31cbd22b0328284292f20a0b6269366520f807d8"},
{132000,"308a0280e8e22f184932a320c5d34b901fa1091dda57433a5f0a31ab49108d19"},
{133000,"db22675efb85b434c51a5304b0b824205c0b25d3b90f816d7121fef388cf5c9f"},
{134000,"33923edd87ca3dc1255cd94eb3cba786c1a89b2bda0e243941ae50ab13c26ec3"},
{135000,"847a4ff060a32294d80da5d308a72b8be2760cad5ddcad28762d59142ab5ba82"},
{136000,"3353bf2126e644cb9b10b03a017d48d869d6233cba911c54f9e15650eb369331"},
{137000,"f66b69dda2fa32d9d2829f43e8e39b79818beccf3035849dc3b280457029a8a7"},
{138000,"c917c2c5f7c75f3c5cd320bed002ed315169294e17ac7b3a320ce286217586a4"},
{139000,"93dd6cd37fd24bc039c9e7e39b780ec280ad1926a35dfd334d566acad74467f3"},
{140000,"24ba087fdd9df46a80ca71059f4d88555902b70a8c37110e31e7550f8d68ea9a"},
{141000,"37600256bee9aae76ba5ecc2c31a0bea1d7820f210876fb7b951d683e56e5b66"},
{142000,"9119f9c7fe8a3761ec2f667c99ed995aaabf3466835b14b0d69649fe0e3869cd"},
{143000,"833d4891cf75f6e7e90f4ee05a2b8a769986360e42e0472cb9cc76b16fb356ca"},
{144000,"a59cd0dadd0337a3d785dde321c8a2bf076b56dcd5b97eb45e3bc1e4e2780c2e"},
{145000,"14aaea764fcd0e7df6627d8552005ee17f9bd759b82ef3406e6b36d7a5c20639"},
{146000,"490454e83bbc1e6c846c5823237d054685ab90f838f357dd873151f5e14f820f"},
{147000,"b64796c22faed403e62ea15311ac9f9d7005e76b1ed4445b7ffdfe1f775609de"},
{148000,"4e1a62e8dd705d80dbbf9080de1e736b18a75ac82af1f4887cba6f63e821ac30"},
{149000,"c9a1132ceccc85e64918cf7cfa9a3cdbcbb583472fa3b9629a6e327695de0054"},
{150000,"3d6a24fd8b484882b81c636bd3b05fb0a6e00e7abed9052eef8b01c00d4dbf5c"},
{151000,"a42af8449bbfc9ea8e590eeb59a9d22a38d53cb231a0b8aee3d7ab8e28244d60"},
{152000,"d3f45ffc763151fe0d8481d7b1e6e28e3fc28cb9e2018835ef55afeff1eb0890"},
{153000,"2f58f7d966c1808bdb3abbf1f03f3ea99548001eb21a56571a4ecf085578b525"},
{154000,"397bbcd9a60385a796ca1e4d0d7bedc4b30f86d3d8077f41c8249caac3bc4d6c"},
{155000,"f630d0fca35475e7e105d9343e5d01deed098f7c000594c9c43a5a70d646fe5e"},
{156000,"ed6f84e483d1aa8f3ce01640b0dab35ca6ca95a6a62f332b37831d359267cdb8"},
{157000,"9dab8a68377bad64f791c5f1002e17bf8bb55065d182cbf5978ca443894b553a"},
{158000,"e894d4edf50bf7fef75f8b59371c76407300d2f9d8dd49821504aceb7a077623"},
{159000,"648800a2e6ac8e090c486c14b5292783a41b346574080772023a1ec4b916ec3d"},
{160000,"f6955bbc28399bb362ffc5573b13fba01276435e4a00b1f1ba79efa96b29a59a"},
{161000,"76532475f5deb69c92418e74115512df330a13df8ebab381e728490734f78105"},
{162000,"41251104bfb38d31b122d8da12c3b1c7654dc281136ae7ae50a18afd3e5852ab"},
{163000,"c3158fd0176a6cf88b65d0a33cdda5e0e134df751479fb4e2b192347170954fb"},
{164000,"3291452390a10648858e7323cfef1b2bdbfb50404ce26fc2e0a2762c62603fa7"},
{165000,"968822461755c9f1a66847181ad342f17d524bf56f1fa9c85855524f6cdae541"},
{166000,"7ee41adae2ab3d1ce5346fa98ae886bccdc186c8ebfae047cdc3f4cbba3a78a0"},
{167000,"33ad2ad7f1bc26825866238581af308f826d9483eb931fa55f72090299af4b48"},
{168000,"3dc37d1ed73dade2367e887f4d00f4110d87da1ec02d6783f48fb3d49461f21f"},
{169000,"30c02ef87a29751271d3398576c05f40d775e4316f4b801d36e59e1e1921e273"},
{170000,"ce05c802ff014a4f06e546df7ce1593ef48aeb7e1dacb1b2674ab9e326fdd7c3"},
{171000,"c7b5e7d63e05ca26c61661359ea1d9e172419c2ddca3ab3e4c99f96e69b41643"},
{172000,"82ad8cecd028099220d1b7e4c5d05395cf07d174d80fc3208784a18bfbf3bf0d"},
{173000,"4b310ea746921f273308e9c1f7fa57ccf99f1382e8dd876f5fe3e8835fec08d6"},
{174000,"9f3fcdad712b96cf7348dec9e9b24f908138a1b8afbd315d058e1bf8f1c2e9c7"},
{175000,"841bf1ea392e98fbfadc5f7ee11b952e95b25535f5837eb11170081c6ce6fec7"},
{176000,"2dc7b468444dd6513b6a68d66a750a14938e34b5644310c031ecf41e49131ed1"},
{177000,"497b370dabfb93c863e3118e82be054d5b100c39d4484ae8320c5821e364bb0f"},
{178000,"5270c2771be3fe180ae6c09e666ba689e7c25942246f12bed7692d7810de64dc"},
{179000,"c3ae8a82cfd50d6ce871d3aa55922f905dd0887b9553d858545ae0e9cb061c3c"},
{180000,"d2f7d7efa331dfb9c9ce64f66fffa66a1f7382aa76c10c5a05a131e46b199933"},
{181000,"43f80a37be851e27a5498b5cd5316d3650c2284e0dd4e4108f00db91ea7c6e8a"},
{182000,"5d712d9e89826d3db3716e5919d24870a8f1ca2d6b19cc4379ebb786715db7b4"},
{183000,"3dc9433c8b7e43b588076a711032bae9d4439b6a51f85bd7b7e2279074b86a94"},
{184000,"b202d6d2ed6be23623e45993314d047e73751df35ecd7d8c5c4e8a0537d7c118"},
{185000,"cefc433f0d0064fb1047b9e88bdc09408135dd720b6b83942c3be8e81f3fa42a"},
{186000,"d21f4ec0ebb54b325b96bea8338ad37f7c8aacd34b95ae2d0248571a253d0b91"},
{187000,"36ab4f16e87ddf11f1846a04d1e26cf27a42a305629769b4f143b5a0549ac203"},
{188000,"5237891d9c70f2e65ec8da7c53b4f4efe50b0b024c4a5601fa4dd3f1a65a0810"},
{189000,"43f12b14a6ba059aecb3085936cfc8b260e85d52d9f442bf596136cbe36259c9"},
{190000,"cb15df7f1c081452415b881c11a155ff9fdde2d944a695f125e2df17f940be31"},
{191000,"934bc2f2d29ae302c46e3c76afac2ae797f910981c7001afdd774927ee344ba5"},
{192000,"1d0488721dd2c7cc2d57976b6f182c707e869c0e3ee9b8188bc598c8753784d0"},
{193000,"a377b299cc8dd802072e7c23fcf4183cfb0dd3daa88bdac2a9b03c673e5c01d6"},
{194000,"d77eb4de7c25ac252c2a5d40ffcb7d0d5edd354d920e2247579406325e9e6658"},
{195000,"33d0f2a40c001a032ae36046b7d80eb14e635896caceb50896a66f61b7630275"},
{196000,"6b46011ab434610f85a02aa973367e384b3e7e84eb48df486e0fc8a90567c4a1"},
{197000,"26b9ef7dba67dfaff9c78c74b8596da39eb9e3724e65a62a24967026c51d1c42"},
{198000,"d85be49ea39cbd1590e9d5789652eb2c6f9011df916abfc924039493200f8c84"},
{199000,"0e352c3efddb00ceab72530f5f452ba54e6d7f50255b1a08dce1cd905e76244e"},
{200000,"85d1dd52f6fce44e1effbb29c782ba52d1384a48bad606073c4c48b0d0738436"},
{201000,"9bda0bf6650fe212cb9a681d62ae8e2dc0a34c3b74f3510d6ac32626313a3782"},
{202000,"b94f491ecc825904b706c7543039009573b80346105c6406af079a992854c077"},
{203000,"123a0af176a054715c4a6c1ce84e2d7cdc0567288ccea90b5ef02e48a2f33605"},
{204000,"469f75340ac85ba28c659613f64f24339a4b3160adb122c63ad3950b3caba090"},
{205000,"08efa15dc5e0c6220eb32e9c41ab5d8f3b8a85829190f8c19f00e426bf8aff5f"},
{206000,"4e076010e2cbde22326c2420cf88c693c7202b482b2e588eaf21e5152c84176a"},
{207000,"010b8ea7b2b9e98ce7fe8fc10f74334b7050826db502c6ce65d4071bd8b09d58"},
{208000,"78ae07a6da35e87cb7531077b1829a00f4a0a76717c442187f3085dcda92cea1"},
{209000,"61f4946aece538e66b7187f725733f7adb87f13254779bb9052924cf325c176f"},
{210000,"5b820e04bf6edc268f44f18b752984f09273d39f047c286586221675357b5812"},
{211000,"453670b0a54bac299fe016f5ca440d4c7b66874fe30cdbb714343cfd9bc6f3a5"},
{212000,"8f016140aacaaa7884ffe0a49804ec38fc87958825ae8a626cd2f6073e18f1ac"},
{213000,"ea1a0134581241a4a4367d0fe6dcf3c77af93b96d74d499b3b9e932526491efc"},
{214000,"928b2fc7b25123a3bf623895dab0b75cc06a2c4a1410fac90a1681ba03130187"},
{215000,"7442da392f64bb8296dfd1d636e12bb62f547ba99d61450e24fb4e730bd8bbf5"},
{216000,"25c79c1ec682bbdf179a9022d0a37f33d13a1c1b278903ea5c4e91a7d722ef32"},
{217000,"1f0d250741bc6f1f2791e362545d8045e397835fd5cbf90d63ff65ce3b72936a"},
{218000,"0fdc345787f7376b246e3dfdb3c4af99c062575e8ea4f56d1a1b40adcbceaf3a"},
{219000,"75572bacf891cb4331cb34989c62bf089873f5968c4d18655c20da1f3d3c0a89"},
{220000,"be24d800d9a634e4f7edd780fc783b2507a77fc4ecf9617d5910e26ec65e31ed"},
{221000,"e19c5367cc77ba8e5b3bc9b8450b29c9729d65853d13a053c98ec8125955a6e9"},
{222000,"c0398a1974ba572b861282269e5b8c9fe7f4d083d8e89eb85db64a82699691f0"},
{223000,"7a6e1860386abd322775b8a9babe13a33e186fe4db0785884090188708d0d17f"},
{224000,"d5241b7eace4fff54e2cadf9f6850daa57d6a4c25d2f3fcf51aeec92f3d4372d"},
{225000,"a37acefee631dcc3493e53b30650bed098586cc9cec44449e2b6d0793241658a"},
{226000,"0013759930de9db186a682ce912f878e96aeee3135f65a8024c7d759349c38e3"},
{227000,"736540bf67247ac58d5aab21fcdbf89436c0f9fb86354e8d9ade85a48516a62f"},
{228000,"211023b284fde3fca9d87bc444dd56dcec4703f556c76a7835ec9b07a99e954a"},
{229000,"cc320bb4cbc1078e87f59442fba2f5a5c9b7462291e00b3e49732e9c0f4f1d81"},
{230000,"55fcce6b7e5321b4b86fa94bf2b732c9f64b7677cbfd03925dc22fbe182ea1ca"},
{231000,"db4cadebe172524947a4cf3912804e62053562e5223b98622a1a8ce5f82111c7"},
{232000,"10eb3ea5cf0bf19353d7aec7442994f592b3d007483571abdebfd0ab6fa1e4ee"},
{233000,"7d0bc1ba0bbec88cfdeb6b40403643102c57f254f346f162f85f235c59b2b44b"},
{234000,"a657a8fa2448bd26677534e988fda8cb9ee9128f5dda851f2baec8e5c19294d3"},
{235000,"885b33c5d804873c0f84bbae863e452f1963a751352c38153dd495feb7d89d29"},
{236000,"ad314d97b30993072ef01435e41659b5b855b1764e8d46dea2915c8bc51c4be5"},
{237000,"fd0dd9a2edd9672f15ef5650c64f179699383e5785dcda178e9f7a0bc928e065"},
{238000,"d2ae854e77fb2c9deb530a75490182537d27b46e60ce20fcc581d688f82631a9"},
{239000,"2ce68da749fab2495a97190c88023b80e876ce8dfebddcdd85432fd8da293be0"},
{240000,"7c2bd2a7af006559b1d1d88d070f729858b130e805d097fd385f7cf64c557ff3"},
{241000,"fd2320facd563109bf8069cb496175d7e6d844ef3306fcc365fd2d92929d5583"},
{242000,"822e7157ec38881025527f88fdac829cf8524740e8f66b870ebb5c266bf755a6"},
{243000,"f43ac8d8e9e0c7d7decfadb2c0bbc5c294190a956205d12e72cf5c19fc8e55cb"},
{244000,"47362e38b7aa218098b2ae0b1ae79e88941a9386cc52dccc708c508d81a00e39"},
{245000,"ebb3a11cb216f39743642c21b0b00431794d7180afd77d0c6bc62a8d2c81bfbc"},
{246000,"a0cbe4de06ee946948f1a6b4e68076831ff340f59d855e93afe75e5de1bc2c5b"},
{247000,"33f6d0ad2315490522a664ba019ae95a338c0ffdf9b5a70e4ee4cd26e57b3704"},
{248000,"bc4d99dd140a1767f02fcb8dae7c83e327d3f8714f033ea07eda326a6dba70a7"},
{249000,"44cecd3ea27a28dc8b5013e00f84ad8ee65ecafd81d6f96d8187b5afb3a97b7d"},
{250000,"590a77f54cef620567d0f4229d81bd612c49ff1154707f0bfdc965ff1da81936"},
{251000,"03b6da9afda01549bd87ba2946f052338a678a275e3bba43a7507f613fd6ed40"},
{252000,"62f7c76ac8954aef7b36f535152f01ed835f9314f3a01059306ee28b255f0a8e"},
{253000,"d631a651dfbf2e45438a199ee6853d783f3ec6d64f4abb8cfd13ac13789bfd78"},
{254000,"710d18126f48c39add18a6217e2992e4c7197b414f6a558ff6661c0154a154a6"},
{255000,"36421f604e01b7b560218fd92a54008b9e63e003d2642d575ded29c91533c848"},
{256000,"c638846e2399bd90dae13ac32bb2178da0bd0d12c19375705e64347fd86facfd"},
{257000,"31828dced5a576be641a4e5a31effb3b2bc77b80469dba467111c7ef5e9a7c64"},
{258000,"c6efd4742585b988ad160e0c2bd279475cb569645456dba7296bfb108b637324"},
{259000,"f293f67f0dd1d63fde8910fa8c410a251e54e92e792ea867bd207ef555a28c3f"},
{260000,"e979ee5b838e2956fdb0b71730f099a68e63dfbbb1b374e35bc4c82f85eb1d17"},
{261000,"6da8fb3ec50955e44d05e7aa50c347970f3b0e2ca57e9733dc195b36e5d79225"},
{262000,"e042a5b0ba51f10455369749624b30794d0a872f183b2354c5e4950a91f47793"},
{263000,"62de68d25e0a2f385b4ed83c1d6a582e6ee3dcffc262f03c1fcf50c48fcb2cc1"},
{264000,"698012d36eabfc7981caad7f5dac3b3de589d78f281948a90a56b933828ba359"},
{265000,"271061bc1ebcd6c983ad09dffe871ac4924a11cd3adc157928ad681ed7506f46"},
{266000,"e0706b29ffd26a253c3bed7fa391818c2d1fe592761fb3a5124b3eb9bedac79d"},
{267000,"d24465233c3ea369b0cff433592c196f1c1ced96a5345e4af520e622d09971af"},
{268000,"6147712467c0bd4673460548d97df21f79cc5f171c0160e35eb8f2e95f681f85"},
{269000,"8e66c22bf32c5b539c2f1a7716d822ccab192563244ecd67efd175c0042debfd"},
{270000,"e9b77618c51ae290ef2d250423fc2d36696edf04b90a297ef6ef48ce8e57bbf2"},
{271000,"c5f3af24bf282eb1e8b26055ae637fc426bac38863158ec12a076a3005d47c7d"},
{272000,"a5304770a517032764db689382aa66c78e3b0316a9ff75543d133ec214879698"},
{273000,"2f7f8c8018e4832a0fc43e2f509913dd3b256ecb801a4cc1244dbc0f8a5d3df6"},
{274000,"9105521f6062a7799003c1aac3bd3f240943707b425c3d9fc297f30b9a3d00fe"},
{275000,"52398c15933080b535924343c76cb3b37e2b70b5a15e841e93132572b724f6e4"},
{276000,"276549cdf5619cbd6b70adcb56b1ffe42b4a84f4519870c2e6b5d6a63b05ae0d"},
{277000,"fc61a74b1b847647aa5ae35e9a8752386d151518e4d8231eee2c0e5c80a5b80e"},
{278000,"8a1467d33ed5d65ca08c7eafc42b998ee01360a57909755dcd40157172150baa"},
{279000,"5c9f9ae43ca0b23b0a013e7c14b8e5290716965f834ce8a6a96f1cbfe867081d"},
{280000,"ad7a0d18d27481e2200470ed1df6320082db16137a563bf7f066979b6e25266d"},
{281000,"7089a548fc6428d3a15176d388b1df8a0f100d4c35597899d60d7bbb4b7cce44"}
};
}
