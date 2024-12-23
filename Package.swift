// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterExample",
    products: [
        .library(name: "TreeSitterExample", targets: ["TreeSitterExample"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterExample",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterExampleTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterExample",
            ],
            path: "bindings/swift/TreeSitterExampleTests"
        )
    ],
    cLanguageStandard: .c11
)
