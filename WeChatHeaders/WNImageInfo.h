//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WNImageInfo : NSObject
{
    float width;
    float height;
    NSString *bigImagePath;
    NSString *thumbImagePath;
}

@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath;
@property(retain, nonatomic) NSString *bigImagePath; // @synthesize bigImagePath;
@property(nonatomic) float height; // @synthesize height;
@property(nonatomic) float width; // @synthesize width;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

