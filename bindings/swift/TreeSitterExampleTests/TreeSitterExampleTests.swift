import XCTest
import SwiftTreeSitter
import TreeSitterExample

final class TreeSitterExampleTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_example())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Example grammar")
    }
}
