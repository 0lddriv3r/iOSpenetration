//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmoticonBoardPageWrap, NSArray;

@interface EmoticonBoardPageSectionInfo : NSObject
{
    unsigned int _sectionNum;
    unsigned int _lastOffsetPageValue;
    EmoticonBoardPageWrap *_pageWrap;
    unsigned int _rowCount;
    NSArray *_qqEmojiPageArray;
}

@property(retain, nonatomic) NSArray *qqEmojiPageArray; // @synthesize qqEmojiPageArray=_qqEmojiPageArray;
@property(nonatomic) unsigned int rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) EmoticonBoardPageWrap *pageWrap; // @synthesize pageWrap=_pageWrap;
@property(nonatomic) unsigned int lastOffsetPageValue; // @synthesize lastOffsetPageValue=_lastOffsetPageValue;
@property(nonatomic) unsigned int sectionNum; // @synthesize sectionNum=_sectionNum;
- (void).cxx_destruct;

@end
