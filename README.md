 Bitcoin P2P e-cash paper
2008-11-01 Thread Satoshi Nakamoto
, and nodes can leave and rejoin the network at will, accepting the longest proof-of-work chain as proof of what happened while they were gone. Full paper at: http://www.bitcoin.org/bitcoin.pdf Satoshi Nakamoto - The Cryptography

Re: Bitcoin P2P e-cash paper
2008-11-02 Thread Satoshi Nakamoto
Satoshi Nakamoto wrote: I've been working on a new electronic cash system that's fully peer-to-peer, with no trusted third party. The paper is available at: http://www.bitcoin.org/bitcoin.pdf We very, very much need such a system, but the way I understand your proposal, it does not seem

Re: Bitcoin P2P e-cash paper
2008-11-03 Thread Satoshi Nakamoto
. The Bitcoin network might actually reduce spam by diverting zombie farms to generating bitcoins instead. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-07 Thread Satoshi Nakamoto
[Lengthy exposition of vulnerability of a systm to use-of-force monopolies ellided.] You will not find a solution to political problems in cryptography. Yes, but we can win a major battle in the arms race and gain a new territory of freedom for several years. Governments are good at cutting

Re: Bitcoin P2P e-cash paper
2008-11-08 Thread Satoshi Nakamoto
, and a constant rate seems like the best formula. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-09 Thread Satoshi Nakamoto
think I will be able to release the code sooner than I could write a detailed spec. You're already right about most of your assumptions where you filled in the blanks. Satoshi Nakamoto - The Cryptography Mailing List

Re: Bitcoin P2P e-cash paper
2008-11-09 Thread Satoshi Nakamoto
. It's not a problem if transactions have to wait one or a few extra cycles to get into a block. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-09 Thread Satoshi Nakamoto
in the chain, it is firmly etched into the global history. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-10 Thread Satoshi Nakamoto
a proof-of-work for a block could be the total of the fees in the block. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-11 Thread Satoshi Nakamoto
to include all the paying transactions they receive. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-13 Thread Satoshi Nakamoto
James A. Donald wrote: It is not sufficient that everyone knows X. We also need everyone to know that everyone knows X, and that everyone knows that everyone knows that everyone knows X - which, as in the Byzantine Generals problem, is the classic hard problem of distributed data processing.

Re: Bitcoin P2P e-cash paper
2008-11-14 Thread Satoshi Nakamoto
that simple altruism can suffice to keep the network running properly. It's very attractive to the libertarian viewpoint if we can explain it properly. I'm better with code than with words though. Satoshi Nakamoto

Re: Bitcoin P2P e-cash paper
2008-11-17 Thread Satoshi Nakamoto
controlled. Right. You need coin aggregation for this to scale. There needs to be a provable transaction where someone retires ten single coins and creates a new coin with denomination ten, etc. Every transaction is one of these. Section 9, Combining and Splitting Value. Satoshi Nakamoto

Re: Bitcoin P2P e-cash paper
2008-11-17 Thread Satoshi Nakamoto
anyway. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Re: Bitcoin P2P e-cash paper
2008-11-17 Thread Satoshi Nakamoto
is coming soon. I sent you the main files. (available by request at the moment, full release soon) Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to [EMAIL PROTECTED]

Bitcoin v0.1 released
2009-01-09 Thread Satoshi Nakamoto
on open market competition, and there will probably always be nodes willing to process transactions for free. Satoshi Nakamoto - The Cryptography Mailing List Unsubscribe by sending unsubscribe cryptography to majord...@metzdowd.com

Re: Bitcoin v0.1 released
2009-01-17 Thread Satoshi Nakamoto
Dustin D. Trammell wrote: Satoshi Nakamoto wrote: You know, I think there were a lot more people interested in the 90's, but after more than a decade of failed Trusted Third Party based systems (Digicash, etc), they see it as a lost cause. I hope they can make the distinction

Re: Bitcoin v0.1 released
2009-01-25 Thread Satoshi Nakamoto
in the transaction's comment field. If the system let users configure the minimum payment they're willing to receive, or at least the minimum that can have a message with it, users could set how much they're willing to get paid to receive spam. Satoshi Nakamoto
