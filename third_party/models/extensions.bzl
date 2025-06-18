def _declare_models_impl(ctx):
    ctx.module.add_repo(
        name = "palm_model",
        rule_class = "local_repository",
        attrs = {
            "path": "third_party/models/palm_detection",
        },
    )

    ctx.module.add_repo(
        name = "hand_model",
        rule_class = "local_repository",
        attrs = {
            "path": "third_party/models/hand_landmark",
        },
    )

declare_models = module_extension(
    implementation = _declare_models_impl,
    tag_classes = {},
)
