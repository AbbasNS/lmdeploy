// Copyright (c) OpenMMLab. All rights reserved.

#pragma once

namespace turbomind {

struct LlamaAttentionParams {
    int  rotray_embedding_dim;
    int  max_position_embeddings;
    bool use_dynamic_ntk;
    bool use_logn_attn;
};

}  // namespace turbomind
