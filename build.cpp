import bake.build;
import std;

int main() {
    bake::Builder b;
    const auto upstream = std::string(b.dep_src_dir("upstream"));

    b.sources({upstream + "/c/common/*.c",
               upstream + "/c/dec/*.c",
               upstream + "/c/enc/*.c"})
        .public_headers(upstream + "/c/include");

    return b.build();
}
