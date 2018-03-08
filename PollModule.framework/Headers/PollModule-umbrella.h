#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "IBandPoll+Internal.h"
#import "IBandPoll.h"
#import "IBandPollQuestion+Internal.h"
#import "IBandPollQuestion.h"
#import "PollApi.h"
#import "PollModule.h"

FOUNDATION_EXPORT double PollModuleVersionNumber;
FOUNDATION_EXPORT const unsigned char PollModuleVersionString[];

