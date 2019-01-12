// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DOGP_ACCUMULATORCHECKPOINTS_JSON_H
#define DOGP_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 1000,\n"
            "    \"1\": \"1d9f5bcfac9aeca8b50b70c4401b2feb719138e72613d88635c604510bea58c06d2f72001598d5e0ff69a039617364605b5022ab0754d80db5858b3ad3c0e454339ebd0ce253d1bd05166be46b3fa591ad9426d0d9673a63ce4cf3e2cefa2a500b786c6daea4008e4d97ac6e02af4827a164102f118737f1ebb24724200ad63b2921e962ba8b43e88516fd29f1c9de8391d6183ab186e3f4bf5d7f2a122da60473eb2e80cb8fecb8b53f6ac669a66630562ccd62965678e1f7459428c033ca4a25baba61188a7fdec58225b46dc95f6cbb1633a70b48fc0422f4787a761a7476e8378c31a7accccb6290cb4ade72db2d9139feed41e017390b01bc47e1fa7afa\",\n"
            "    \"5\": \"b9c35401f6c3c7ee45e4827472deb663f4c79ccd59e7cfde8f788a967d46cd9e3eb18a8e0c7460be50de4f83ac23e9558c7edca9e8512973fc040c4a8c7e941bce60fe9c1e224492ed5bce6aba7f81af808f8b18c537d20557e04113aaf24b0ce7ea2905dd1dd13ee015b3d53ab0f32d296209316f7140c1d5f4c94c42e9ef90e141b3fcb7e910f0b54f49498ae745ea328964e37e36119df536cf88eee8359ae7fee15d228d187045a219f5c44b7acf11ad6c51eda9d332a1ad57bae063a6a8e96c6fcd77ab871003802c5dbe2fb6ce13e3f8d0842ed5fec091ee9ad72c684430e773f003cb4bfde69f43669d0f71d5976fa5452a4ef0222026d5334acb0a01\",\n"
            "    \"10\": \"3ab76b4456d4bed6b7960bb4a22cf27af7b3c3ab8cff967131771a8520f6a27dae597bc39432433f8c42592c32ee4baf8f32291dda917486042a2cf03ba6c186ebd8054a8f8c6b56d040ba352e730134f17d7e42770cde8a9132fac58261322ab1870a2da81241dcbad73d77f9d28bbab7ea322ea48069869e1f372bbb8bc52f1b90e4056ac3f7a3847c0ba8ad30d8eaa822311451b8f8fec85a4dc6ad3ee05993267f8afcee01521ad5ca0722607dc20625e5b84fc18a5c11c6762df330600b825935f61204b2518cda1999e213f88c31a2bb8141815dd279b12da0633cc2ca82e28162958117e92fece13647c051877755e19dea13c1240ce2564b54bce1ad\",\n"
            "    \"50\": \"aa268cff6bfbae1cae76082ee3aa81af9c222b416a80e7be7049fea535ca2de3f06fbcda828ad6bdd040c0abf2e0b809af26ec1f624fb93242ccda7da1b16db45fd60c8d4a91632d209267f65df5c1198f3fa07c30f61eb48e9a165774336ae261cb3fecdfca00ca09ac1f46bbd19343ccec811455c2fc12ac2d06381a72eb7e6a539196a9bb23bcdec88b98e24fbc5b1c48446eb3d56ade184ad8b65e472ce4dd997dda7898c23ed4431adaa61a2434a159af946aebeb09e993422fbe1ac8fae8ee3ec5903c7432c03fb4f6bca6c769e630182134b9a5313918a25667bc5c77a2de0dafd8ef01ebbf2a0964b294282313739e55cec0806fa92b986733838318\",\n"
            "    \"100\": \"9e5875118f498ecd02e914bfd9dd6ba4773e850d7c0833d3b9c8f8fa7b5a16d16e2af7bf47e7767e2b0ccbc4bf87486a10799f4303ff56acf396f22c0c022a6e325dcfd2ed9c8b5afc4774e474f19205a3a9e608852a6d635dbd67be1fc2d4b6bd482a195335080bc9962e41c8227ab1b535bd5bad0216a579b678f31e56c1d6627dc06ccaed7661764cf85eccb231912dd7f0f998fec99b3e14677cc0c9a19803a02a6ef1f7f9e275efc10290452e3ecb22934be84ab390cba30b71d50f40a81bb9f9575c292a51181b73460eb45138f2464d79d8eba14077ea14d8e51db90cae0ad736171626700e0bf5ecb706417886787f22908484b370a393482ab8eceb\",\n"
            "    \"500\": \"a80fe2469cd698294da66a54c810943ead5e133f36db8cdb57bfc759fef585ef36b8130146751bc90aea72d0ab40a94f9868bbc822a8e983a6e1a57c5d234a9d65bc062eb14469d421c6e1be1a892758dcdb556bfbb51dbeaace09404675c931c886d4f1132ad6ee9dc54e5b322936796df17410e2599eb118abc4a254b2a94a0a8037ea8ee83724757b59c37eb8bf962a26d6382f3ee1e37623c935fb0faf311758109cc505576aa4991f60230d42388fc3567b321e5278a3528b280dc2560f3c84cf13cf400a8fd01f27a81af99bcb86a9e3e58f2c76e49338efcc8f305923a25a7bcce0a58d6f9d257f079f37086b77cfeba3290c140b64ec3d8b6c84798e\",\n"
            "    \"1000\": \"93d37f154b28e9792dd7057795e6c2a720909e8157beeee9bc654747c71662b41e5d4bd91cab947baf9944ddb9d0f0b0e8fb44ca6c92b98fd22acc57885792c0ea34c1ac5f0a84a11fdb65d43e3dd359c0720bc05a1425be8e006254cae369cbf907f9272fa942b235ba4f98788466e66f8e0d3ce81ef78373167f7e6836c7ae86190d46cfff9882c94f26787bf815845db9b29cda4ee6a36d03c99fdbd9bf645ae5157909a8f27055b6b3ed0a3e75c931e3e8709efadd3514f4961f396488190c7564cae500b3e75960ef11856ada1799c9fc4d0e14d52cffa2ea4cad3df77ab717144447d94fb976c2bbb4b6e614ea63690afe59c8702b0401b486a2a91808\",\n"
            "    \"5000\": \"45e6788b12c7f1fabc37fd2ea8198a88dcd4c01e2974355dec98f027e86e9ab199c3f21e85423aec48c5f61b08c1f9237b1cf50215cb3091ab962f82624350f25d98dc3f42ba924a1f7ce48433e471660b3d4bd8d8a31e88721ce78eb4156f69573725d3e12ac81e85f6eda17e2d58bf28cfc2a49cd498225c24fbf300ff902a3c205cc0bab30d2ec9fbae479624959ece1ad917be81b914ae2c9cf9b8ab86d6717160e4bf2cd482a330648186fea3f97143f00fdbe8dd64d187d4cf3dc4824c7cea90ab91f7713a0b0629d82a01287d19c64c2cb1e032d869ccf78fbd505b3b591552d88334047ee2350b8cfed732d3f77c3ab97405327726a9f4f08fcce4ee\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //DOGP_ACCUMULATORCHECKPOINTS_JSON_H
