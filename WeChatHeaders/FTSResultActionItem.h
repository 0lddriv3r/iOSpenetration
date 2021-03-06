//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FTSResultActionItem : NSObject
{
    NSString *_keyword;
    unsigned int _actionType;
    unsigned int _searchType;
    NSDictionary *_displayInfo;
}

@property(nonatomic) NSDictionary *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(nonatomic) unsigned int searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)genStatString;
- (unsigned long)displayCountForSection:(unsigned int)arg1;
- (BOOL)hasDisplayForSection:(unsigned int)arg1;
- (id)init;

@end

