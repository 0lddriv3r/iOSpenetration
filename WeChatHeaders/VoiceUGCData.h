//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VoiceUGCData : NSObject
{
    int _originPosition;
    int _originLength;
    int _combinePosition;
    int _combineLength;
    int _wordId;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int wordId; // @synthesize wordId=_wordId;
@property(nonatomic) int combineLength; // @synthesize combineLength=_combineLength;
@property(nonatomic) int combinePosition; // @synthesize combinePosition=_combinePosition;
@property(nonatomic) int originLength; // @synthesize originLength=_originLength;
@property(nonatomic) int originPosition; // @synthesize originPosition=_originPosition;
- (void).cxx_destruct;

@end
