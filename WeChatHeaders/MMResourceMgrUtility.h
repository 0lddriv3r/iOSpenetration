//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMResourceMgrUtility : NSObject
{
}

+ (id)appendRandomParamToUrlStr:(id)arg1;
+ (int)crc32WithData:(id)arg1;
+ (id)getMd5FromStr:(id)arg1 deleteUrlScheme:(BOOL)arg2;
+ (id)getUrlWithoutParam:(id)arg1;
+ (id)getResourceInfoDBPath;
+ (id)getTestResourcePath:(int)arg1 WithSubResType:(unsigned long)arg2 WithEID:(unsigned long)arg3;
+ (id)getResourcePath:(int)arg1 WithSubResType:(unsigned long)arg2;
+ (id)getResourcePath:(int)arg1;
+ (id)getResourceDirDependentOnClientVersion:(int)arg1;
+ (id)getResourceDir:(int)arg1;
+ (id)getResourceCdnDownloadSuccessDir;
+ (id)getResourceCdnDownloadDir;
+ (id)getResourceRootDir;

@end

