//
//  IBandPollQuestion+Internal.h
//  IBandPlayerSDK
//
//  Created by Yogev Barber on 05/02/2018.
//  Copyright © 2018 IBand. All rights reserved.
//

#import "IBandPollQuestion.h"

@class IBandPoll;

@interface IBandPollQuestion (Internal)
/**
 * Create a new question from json object.
 *
 * @param unparsedQuestion The json object
 * @param poll Poll
 */
- (instancetype)initWithUnparsedQuestion:(id)unparsedQuestion poll:(IBandPoll*)poll;

/**
 * Update questions votes
 *
 * @param unparsedVotesArray the unparsed votes ratio
 */
- (void)updateVotesRatio:(id)unparsedVotesArray;

/**
 * Get the question id.
 */
- (NSString*)getId;

/**
 * Stop ready state timers in case the question removed from the active questions on the poll.
 */
-(void) stopTimers;
@end

