//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMAssetConfigObject : NSObject
{
}

- (id)description;
- (BOOL)isRetrivingOriginEditedImage;
- (unsigned int)minNoneCompressLongImageSize;
- (unsigned int)minNoneCompressNormalImageSize;
- (float)minCompressEarnings;
- (float)compressQuality;
- (struct CGSize)imageResultSizeForOriginSize:(struct CGSize)arg1;
- (BOOL)isCompressResolutionSizeValid:(struct CGSize)arg1;
- (struct CGSize)imageSizeLimit;
- (BOOL)shouldCompressLongImage;
- (BOOL)isRetrivingOriginImage;

@end
