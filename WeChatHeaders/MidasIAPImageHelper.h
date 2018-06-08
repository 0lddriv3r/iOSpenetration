//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasIAPImageHelper : NSObject
{
}

+ (id)compressImage:(id)arg1 withMaxBytes:(unsigned int)arg2;
+ (BOOL)isGif:(id)arg1;
+ (id)image:(id)arg1 scaleToFitSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 scaleToFitSizeWithMaxLongSide:(float)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxLongSide:(float)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxShortSide:(float)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxLongSide:(float)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxShortSide:(float)arg2;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(int)arg3;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2;
+ (void)image:(id)arg1 drawInRectWithFitSize:(struct CGRect)arg2;
+ (id)image:(id)arg1 fillSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 withResize:(struct CGSize)arg2 center20PercentOffsetYInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 withResize:(struct CGSize)arg2 centerInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 centerInSize:(struct CGSize)arg2;
+ (struct CGRect)getFillIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)getFitIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 clipToRect:(struct CGRect)arg2;
+ (id)imageFromView:(id)arg1;
+ (id)imageFromViewWithRect:(id)arg1 rect:(struct CGRect)arg2;

@end

