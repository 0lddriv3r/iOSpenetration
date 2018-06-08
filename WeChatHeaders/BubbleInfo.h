//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface BubbleInfo : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleCaches;
    NSString *_bubbleName;
    NSString *_bubbleNameHL;
    unsigned int _type;
    unsigned int _position;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) unsigned int position; // @synthesize position=_position;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSString *bubbleNameHL; // @synthesize bubbleNameHL=_bubbleNameHL;
@property(retain, nonatomic) NSString *bubbleName; // @synthesize bubbleName=_bubbleName;
- (void).cxx_destruct;
- (id)getNewBubbleImage:(BOOL)arg1;
- (id)getBubbleImage:(BOOL)arg1;
- (id)init;

@end
