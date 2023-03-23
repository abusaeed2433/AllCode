// https://leetcode.com/problems/encode-and-decode-tinyurl



public class Codec {
    public static HashMap<String,String> urlToTiny = new HashMap<>();
    public static HashMap<String,String> tinyToUrl = new HashMap<>();
    public static long size = 0;

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        String sUrl = "https://www.idiot.com/"+size;

        urlToTiny.put(longUrl,sUrl);
        tinyToUrl.put(sUrl,longUrl);
        size++;
        return sUrl;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        return tinyToUrl.get(shortUrl);
    }

    
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));