package tree_sitter_example_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_example "github.com/tree-sitter/tree-sitter-example/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_example.Language())
	if language == nil {
		t.Errorf("Error loading Example grammar")
	}
}
