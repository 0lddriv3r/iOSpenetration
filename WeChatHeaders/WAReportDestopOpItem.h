//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportDestopOpItem : WAReportBaseItem
{
    unsigned long _eventTime;
    unsigned int _opActionType;
    unsigned int _opScene;
}

@property(nonatomic) unsigned int opScene; // @synthesize opScene=_opScene;
@property(nonatomic) unsigned int opActionType; // @synthesize opActionType=_opActionType;
@property(nonatomic) unsigned long eventTime; // @synthesize eventTime=_eventTime;
- (id)reportString;

@end
