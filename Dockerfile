# Dockerfile for Base Image Creation 

# VERSION    0.1

# Apply Dockerfile Best Practices :
#
# 1. Keep common instructions at the top of the
#    Dockerfile to utilize the cache.
#
# 2. Always pass -t to tag the resulting image.
#
# 3. Never map the public port in a Dockerfile.
#
# 4. Always use the array syntax when using CMD
#    and ENTRYPOINT.
#
# 5. ENTRYPOINT and CMD are better together.
#
# see http://crosbymichael.com/dockerfile-best-practices.html

FROM lgsd/diamond

