//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GameJumpInfo : NSObject
{
    NSString *_jumpId;
    int _jumpType;
    NSString *_jumpUrl;
}

@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *jumpId; // @synthesize jumpId=_jumpId;
- (void).cxx_destruct;
- (id)getXmlSectionString;

@end

