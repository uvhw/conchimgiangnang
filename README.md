{| class="wikitable"
!style="width:16ex"| CVE
! Announced !! Affects !! Severity !! Attack is... !! Flaw !! Net
|-
| Pre-BIP protocol changes
| n/a
| All Bitcoin clients
|bgcolor=pink| Netsplit<ref name="Netsplit"/>
|bgcolor=pink| Implicit<ref name="hardfork">This is a protocol "hard-fork" that old clients will reject as invalid and must therefore not be used.</ref>
| [[Consensus versions|Various hardforks and softforks]]
|bgcolor=lime| 100%
|-
| [[#CVE-2010-5137|CVE-2010-5137]]
| 2010-07-28
| wxBitcoin and bitcoind
|bgcolor=yellow| DoS<ref name="DoS">Attacker can disable some functionality, for example by crashing clients</ref>
|bgcolor=pink| Easy
| OP_LSHIFT crash
|bgcolor=lime| 100%
|-
| [[#CVE-2010-5141|CVE-2010-5141]]
| 2010-07-28
| wxBitcoin and bitcoind
|bgcolor=pink| Theft<ref name="Theft">Attacker can take coins outside known network rules</ref>
|bgcolor=pink| Easy
| OP_RETURN could be used to spend any output.
|bgcolor=lime| 100%
|-
| [[#CVE-2010-5138|CVE-2010-5138]]
| 2010-07-29
| wxBitcoin and bitcoind
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| Unlimited SigOp DoS
|bgcolor=lime| 100%
|-
| '''[[CVE-2010-5139]]'''
| 2010-08-15
| wxBitcoin and bitcoind
|bgcolor=pink| Inflation<ref name="inflation">Attacker can create coins outside known network rules</ref>
|bgcolor=pink| Easy
| Combined output overflow
|bgcolor=lime| 100%
|-
| [[#CVE-2010-5140|CVE-2010-5140]]
| 2010-09-29
| wxBitcoin and bitcoind
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| Never confirming transactions
|bgcolor=lime| 100%
|-
| [[#CVE-2011-4447|CVE-2011-4447]]
| 2011-11-11
| wxBitcoin and bitcoind
|bgcolor=pink| Exposure<ref name="Exposure">Attacker can access user data outside known acceptable methods</ref>
|bgcolor=lime| Hard
| Wallet non-encryption
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2011-4447.html 100%]
|-
| [[#CVE-2012-1909|CVE-2012-1909]]
| 2012-03-07
| Bitcoin protocol and all clients
|bgcolor=pink| Netsplit<ref name="Netsplit">Attacker can create multiple views of the network, enabling [[double-spending]] with over 1 confirmation</ref>
|bgcolor=lime| Very hard
| Transaction overwriting
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2012-1909.html 100%]
|-
| [[#CVE-2012-1910|CVE-2012-1910]]
| 2012-03-17
| bitcoind & Bitcoin-Qt for Windows
|bgcolor=pink| Unknown<ref name="Unknown">Extent of possible abuse is unknown</ref>
|bgcolor=lime| Hard
| Non-thread safe MingW exceptions
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2012-1910.html 100%]
|-
| [[#BIP-0016|BIP 0016]]
| 2012-04-01
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: P2SH
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/BIP-0016.html 100%]
|-
| [[#CVE-2012-2459|CVE-2012-2459]]
| 2012-05-14
| bitcoind and Bitcoin-Qt
|bgcolor=pink| Netsplit<ref name="Netsplit"/>
|bgcolor=pink| Easy
| Block hash collision (via merkle root)
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2012-2459.html 100%]
<!--
|-
| [[#CVE-2012-3584|CVE-2012-3584]]
| 2012-06-16
| Bitcoin p2p protocol
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=yellow| Miners<ref name="MinerEasy"/>
| Poor miner incentives
| (no fix)
-->
|-
| '''[[CVE-2012-3789]]'''
| 2012-06-20
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| (Lack of) orphan txn resource limits
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20123789 100%]
|-
| [[#CVE-2012-4682|CVE-2012-4682]]
| 
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| DoS<ref name="DoS"/>
| 
| 
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2012-4682.html 100%]
|-
| '''[[CVE-2012-4683]]'''
| 2012-08-23
| bitcoind and Bitcoin-Qt
| bgcolor=yellow| DoS<ref name="DoS"/>
| bgcolor=pink| Easy
| Targeted DoS by CPU exhaustion using alerts
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/CVE-2012-4683.html 100%]
|-
| '''[[CVE-2012-4684]]'''
| 2012-08-24
| bitcoind and Bitcoin-Qt
| bgcolor=yellow| DoS<ref name="DoS"/>
| bgcolor=pink| Easy
| Network-wide DoS using malleable signatures in alerts
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20124684 100%]
|-
| [[#CVE-2013-2272|CVE-2013-2272]]
| 2013-01-11
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| Exposure<ref name="Exposure"/>
|bgcolor=pink| Easy
| Remote discovery of node's wallet addresses
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20132272 99.99%]
|-
| [[#CVE-2013-2273|CVE-2013-2273]]
| 2013-01-30
| bitcoind and Bitcoin-Qt
|bgcolor=lime| Exposure<ref name="Exposure"/>
|bgcolor=yellow| Easy
| Predictable change output
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20132273 99.99%]
|-
| [[#CVE-2013-2292|CVE-2013-2292]]
| 2013-01-30
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=lime| Hard
| A transaction that takes at least 3 minutes to verify
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20132292 0%]
|-
| '''[[CVE-2013-2293]]'''
| 2013-02-14
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| Continuous hard disk seek
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20132293 99.99%]
|-
| [[#CVE-2013-3219|CVE-2013-3219]]
| 2013-03-11
| bitcoind and Bitcoin-Qt 0.8.0
|bgcolor=pink| Fake Conf<ref name="FakeConf"/>
|bgcolor=yellow| Miners<ref name="MinerEasy"/>
| Unenforced block protocol rule
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20133219 100%]
|-
| [[#CVE-2013-3220|CVE-2013-3220]]
| 2013-03-11
| bitcoind and Bitcoin-Qt
|bgcolor=pink| Netsplit<ref name="Netsplit"/>
|bgcolor=lime| Hard
| Inconsistent BDB lock limit interactions
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20133220 99.99%]
|-
| [[#BIP-0034|BIP 0034]]
| 2013-03-25
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf"/>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: Height in coinbase
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/BIP-0034.html 100%]
|-
| [[#BIP-0050|BIP 0050]]
| 2013-05-15
| All Bitcoin clients
|bgcolor=pink| Netsplit<ref name="Netsplit"/>
|bgcolor=pink| Implicit<ref name="hardfork">This is a protocol "hard-fork" that old clients will reject as invalid and must therefore not be used.</ref>
| Hard fork to remove txid limit protocol rule
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?50 99.99%]
|-
| [[#CVE-2013-4627|CVE-2013-4627]]
| 2013-06-??
| bitcoind and Bitcoin-Qt
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=yellow| Easy
| Memory exhaustion with excess tx message data
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20134627 99%]
|-
| [[#CVE-2013-4165|CVE-2013-4165]]
| 2013-07-20
| bitcoind and Bitcoin-Qt
|bgcolor=pink| Theft<ref name="theft-local-timing">Local attacker could potentially determine the RPC passphrase via a timing sidechannel.</ref>
|bgcolor=lime| Local
| Timing leak in RPC authentication
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20134165 99%]
|-
| [[#CVE-2013-5700|CVE-2013-5700]]
| 2013-09-04
| bitcoind and Bitcoin-Qt 0.8.x
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| Remote p2p crash via bloom filters
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20135700 99%]
|-
| [[#CVE-2014-0160|CVE-2014-0160]]
| 2014-04-07
| Anything using OpenSSL for TLS
|bgcolor=pink| Unknown<ref name="Unknown"/>
|bgcolor=pink| Easy
| Remote memory leak via payment protocol
| Unknown
|-
| CVE-2015-3641
| 2014-07-07
| bitcoind and Bitcoin-Qt prior to 0.10.2
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| (Yet) Unspecified DoS
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20135700 99.9%]
|-
| BIP 66
| 2015-02-13
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: Strict DER signatures
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?66 99%]
|-
| BIP 65
| 2015-11-12
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: OP_CHECKLOCKTIMEVERIFY
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?65 99%]
|-
| BIPs 68, 112 & 113
| 2016-04-11
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softforks: Rel locktime, CSV & MTP locktime
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?68 99%]
|-
| BIPs 141, 143 & 147
| 2016-10-27
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: Segwit
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?141 99%]
|-
| [[#CVE-2016-8889|CVE-2016-8889]]
| 2016-10-27
| Bitcoin Knots GUI 0.11.0 - 0.13.0
|bgcolor=yellow| Exposure
|bgcolor=lime| Hard
| Debug console history storing sensitive info
|bgcolor=lime| 100%
|-
| CVE-2017-9230
| ?
| Bitcoin
| ?
| ?
| ASICBoost
|bgcolor=pink| 0%
|-
| BIP 148
| 2017-03-12
| All Bitcoin clients
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: Segwit UASF
| ?
|-
| [[#CVE-2017-12842|CVE-2017-12842]]
| 2018-06-09
|
|
|
| No commitment to block merkle tree depth
|
|-
| [https://lists.linuxfoundation.org/pipermail/bitcoin-dev/2018-July/016189.html CVE-2016-10724]
| 2018-07-02
| bitcoind and Bitcoin-Qt prior to 0.13.0
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Keyholders<ref name="KeyholderEasy">Attacking requires signing with the publicly-disclosed alert key</ref>
| Alert memory exhaustion
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201610724 99%]
|-
| [https://lists.linuxfoundation.org/pipermail/bitcoin-dev/2018-July/016189.html CVE-2016-10725]
| 2018-07-02
| bitcoind and Bitcoin-Qt prior to 0.13.0
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Keyholders<ref name="KeyholderEasy">Attacking requires signing with the publicly-disclosed alert key</ref>
| Final alert cancellation
|bgcolor=lime| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201610724 99%]
|-
| [[#CVE-2018-17144|CVE-2018-17144]]
| 2018-09-17
| bitcoind and Bitcoin-Qt prior to 0.16.3
|bgcolor=pink| Inflation<ref name="inflation"/>
|bgcolor=yellow| Miners<ref name="MinerEasy"/>
| Missing check for duplicate inputs
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201817144 80%]
|-
| [https://medium.com/@lukedashjr/cve-2018-20587-advisory-and-full-disclosure-a3105551e78b CVE-2018-20587]
| 2019-02-08
| Bitcoin Knots prior to 0.17.1, and all current Bitcoin Core releases
|bgcolor=pink| Theft<ref name="theft-local-timing">Local attacker could potentially determine the RPC passphrase via a timing sidechannel.</ref>
|bgcolor=lime| Local
| No alert for RPC service binding failure
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201820587 <1%]
|-
| [[#CVE-2017-18350|CVE-2017-18350]]
| 2019-06-22
| bitcoind and Bitcoin-Qt prior to 0.15.1
|bgcolor=pink| Unknown
|bgcolor=pink| Varies<ref>Depends on software configuration</ref>
| Buffer overflow from SOCKS proxy
|bgcolor=yellow| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201718350 94%]
|-
| [[#CVE-2018-20586|CVE-2018-20586]]
| 2019-06-22
| bitcoind and Bitcoin-Qt prior to 0.17.1
|bgcolor=lime| Deception
|bgcolor=lime| RPC access
| Debug log injection via unauthenticated RPC
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201820586 77%]
|-
| [https://lists.linuxfoundation.org/pipermail/lightning-dev/2019-September/002174.html CVE-2019-12998]
| 2019-08-30
| c-lightning prior to 0.7.1
|bgcolor=pink| Theft
|bgcolor=pink| Easy
| Missing check of channel funding UTXO
|-
| [https://lists.linuxfoundation.org/pipermail/lightning-dev/2019-September/002174.html CVE-2019-12999]
| 2019-08-30
| lnd prior to 0.7
|bgcolor=pink| Theft
|bgcolor=pink| Easy
| Missing check of channel funding UTXO amount
|-
| [https://lists.linuxfoundation.org/pipermail/lightning-dev/2019-September/002174.html CVE-2019-13000]
| 2019-08-30
| eclair prior to 0.3
|bgcolor=pink| Theft
|bgcolor=pink| Easy
| Missing check of channel funding UTXO
|-
| [[#CVE-2020-14199|CVE-2020-14199]]
| 2020-06-03
| Trezor and others
|bgcolor=pink| Theft
|bgcolor=lime| Social<ref>User must be tricked into cooperating (social engineering)</ref>
| Double-signing can enable unintended fees
|-
| [https://invdos.net/ CVE-2018-17145]
| 2020-09-09
| Bitcoin Core prior to 0.16.2<br>Bitcoin Knots prior to 0.16.1<br>Bcoin prior to 1.0.2<br>Btcd prior to 0.21.0
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| p2p memory blow-up
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?201817145 87%]
|-
| [[#CVE-2020-26895|CVE-2020-26895]]
| 2020-10-08
| lnd prior to 0.10
|bgcolor=pink| Theft
|bgcolor=pink| Easy
| Missing low-S normalization for HTLC signatures
|-
| [[#CVE-2020-26896|CVE-2020-26896]]
| 2020-10-08
| lnd prior to 0.11
|bgcolor=pink| Theft
|bgcolor=yellow | Varies<ref>Depends on node configuration, only affects routable merchants, requires external knowledge of receiver's invoices and/or luck to identify receiver, only works against single-shot HTLCs (legacy or MPP)</ref>
| Invoice preimage extraction via forwarded HTLC
|-
| CVE-2020-14198
| 
| Bitcoin Core 0.20.0
|bgcolor=yellow| DoS<ref name="DoS"/>
|bgcolor=pink| Easy
| Remote DoS
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?202014198 93%]
|-
| [[#CVE-2021-3401|CVE-2021-3401]]
| 2021-02-01
| Bitcoin Core GUI prior to 0.19.0<br>Bitcoin Knots GUI prior to 0.18.1
|bgcolor=pink| Theft
|bgcolor=lime| Hard
| Qt5 remote execution
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?20213401 64%]
|-
| [[#CVE-2021-31876|CVE-2021-31876]]
| 2021-05-06
| Various wallets
|
|
|
|-
| CVE-2021-41591
| 2021-10-04
| Lightning software
|
|
|
|-
| CVE-2021-41592
| 2021-10-04
| Lightning software
|
|
|
|-
| CVE-2021-41593
| 2021-10-04
| Lightning software
|
|
|
|-
| BIPs 341-343
| 2021-11-13
| All Bitcoin nodes
|bgcolor=yellow| Fake Conf<ref name="FakeConf">Attacker can double-spend with 1 confirmation</ref>
|bgcolor=yellow| Miners<ref name="MinerEasy">Attacking requires mining block(s)</ref>
| Softfork: Taproot
|bgcolor=pink| [http://luke.dashjr.org/programs/bitcoin/files/charts/security.html?343 57%]

|}

<references/>

__NOTOC__

== CVE-2010-5137 ==

 <b>Date:</b> 2010-07-28
 <b>Summary:</b> OP_LSHIFT crash
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || * - 0.3.4 || 0.3.5
|}

On July 28 2010, two bugs were discovered and demonstrated on the test network. One caused bitcoin to crash on some machines when processing a transaction containing an OP_LSHIFT. This was never exploited on the main network, and was fixed by Bitcoin version 0.3.5.

After these bugs were discovered, many currently-unused script words were disabled for safety.

=== References ===
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2010-5137 US-CERT/NIST]


== CVE-2010-5141 ==

 <b>Date:</b> 2010-07-28
 <b>Summary:</b> ?
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || * - 0.3.4 || 0.3.5
|}

On July 28 2010, two bugs were discovered and demonstrated on the test network. One exploited a bug in the transaction handling code and allowed an attacker to spend coins that they did not own. This was never exploited on the main network, and was fixed by Bitcoin version 0.3.5.

After these bugs were discovered, many currently-unused script words were disabled for safety.

=== References ===
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2010-5141 US-CERT/NIST]


== CVE-2010-5138 ==

 <b>Date:</b> 2010-07-29
 <b>Summary:</b> Unlimited SigOp DoS
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || * - 0.3.? || 0.3.?
|}

On July 29 2010, it was discovered that block [http://blockexplorer.com/block/00000000000997f9fd2fe1ee376293ef8c42ad09193a5d2086dddf8e5c426b56 71036] contained several transactions with a ton of OP_CHECKSIG commands. There should only ever be one such command. This caused every node to do extra unnecessary work, and it could have been used as a denial-of-service attack. A new version of Bitcoin was quickly released. The new version did not cause a fork on the main network, though it did cause one on the test network (where someone had played around with the attack more).

=== References ===
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2010-5138 US-CERT/NIST]


== CVE-2010-5139 ==
{{main|CVE-2010-5139}}
 <b>Date:</b> 2010-08-15
 <b>Summary:</b> Combined output overflow
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || * - 0.3.10 || 0.3.11
|}

On August 15 2010, it was [http://bitcointalk.org/index.php?topic=822.0 discovered] that block 74638 contained a transaction that created over 184 billion bitcoins for two different addresses. This was possible because the code used for checking transactions before including them in a block didn't account for the case of outputs so large that they overflowed when summed. A new version was published within a few hours of the discovery. The block chain had to be forked. Although many unpatched nodes continued to build on the "bad" block chain, the "good" block chain overtook it at a block height of 74691. The bad transaction no longer exists for people using the longest chain.

The block and transaction:
<pre>CBlock(hash=0000000000790ab3, ver=1, hashPrevBlock=0000000000606865, hashMerkleRoot=618eba,
nTime=1281891957, nBits=1c00800e, nNonce=28192719, vtx=2)
  CTransaction(hash=012cd8, ver=1, vin.size=1, vout.size=1, nLockTime=0)
    CTxIn(COutPoint(000000, -1), coinbase 040e80001c028f00)
    CTxOut(nValue=50.51000000, scriptPubKey=0x4F4BA55D1580F8C3A8A2C7)
  CTransaction(hash=1d5e51, ver=1, vin.size=1, vout.size=2, nLockTime=0)
    CTxIn(COutPoint(237fe8, 0), scriptSig=0xA87C02384E1F184B79C6AC)
    CTxOut(nValue=92233720368.54275808, scriptPubKey=OP_DUP OP_HASH160 0xB7A7)
    CTxOut(nValue=92233720368.54275808, scriptPubKey=OP_DUP OP_HASH160 0x1512)
  vMerkleTree: 012cd8 1d5e51 618eba

Block hash: 0000000000790ab3f22ec756ad43b6ab569abf0bddeb97c67a6f7b1470a7ec1c
Transaction hash: 1d5e512a9723cbef373b970eb52f1e9598ad67e7408077a82fdac194b65333c9</pre>

=== References ===
* [https://bitcointalk.org/index.php?topic=822.0 Discovery]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2010-5139 US-CERT/NIST]

== CVE-2010-5140 ==

 <b>Date:</b> 2010-09-29
 <b>Summary:</b> Never confirming transactions
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || * - 0.3.12 || 0.3.13
|}

Around September 29, 2010, people started [https://bitcointalk.org/index.php?topic=1306.0 reporting] that their sent transactions would not confirm. This happened because people modified Bitcoin to send sub-0.01 transactions without any fees. A 0.01 fee was at that time required by the network for such transactions (essentially prohibiting them), so the transactions remained at 0 confirmations forever. This became a more serious issue because Bitcoin would send transactions using bitcoins gotten from transactions with 0 confirmations, and these resulting transactions would also never confirm. Because Bitcoin tends to prefer sending smaller coins, these invalid transactions quickly multiplied, contaminating the wallets of everyone who received them.

Bitcoin was changed to only select coins with at least 1 confirmation. The remaining sub-0.01 transactions were cleared by generators who modified their version of Bitcoin to not require the micropayment fee. It took a while for everything to get cleared, though, because many of the intermediate transactions had been forgotten by the network by this point and had to be rebroadcast by the original senders.

=== References ===
* [https://bitcointalk.org/index.php?topic=1306.0 Initial reports]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2010-5140 US-CERT/NIST]


== CVE-2011-4447 ==

 <b>Date:</b> 2011-11-11
 <b>Summary:</b> Wallet non-encryption
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind<br>wxBitcoin || 0.4.0 - 0.4.1rc6 || 0.4.1<br>0.5.0
|}

=== References ===
* [https://bitcointalk.org/index.php?topic=51604.0 Announcement]
* [https://bitcointalk.org/index.php?topic=51474.0 Finding]
* [http://bitcoin.org/releases/2011/11/21/v0.5.0.html 0.5.0]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2011-4447 US-CERT/NIST]


== CVE-2012-1909 ==

 <b>Date:</b> 2012-03-07
 <b>Summary:</b> Transaction overwriting
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin protocol || Before March 15th, 2012 || BIP 30
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.4rc2<br>0.5.0rc1 - 0.5.0.4rc2<br>0.5.1rc1 - 0.5.3rc2<br>0.6.0rc1 - 0.6.0rc2 || 0.4.4<br>0.5.0.4<br>0.5.3<br>0.6.0rc3
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [https://bitcointalk.org/index.php?topic=67738.0 Announcement]
* [https://en.bitcoin.it/wiki/BIP_0030 Fix]
* [https://bugs.gentoo.org/show_bug.cgi?id=407793 Gentoo bug tracker]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2012-1909 US-CERT/NIST]

== CVE-2012-1910 ==

 <b>Date:</b> 2012-03-17
 <b>Summary:</b> Non-thread safe MingW exceptions
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| bitcoind for Windows<br>Bitcoin-Qt for Windows || 0.5.0rc1 - 0.5.0.4<br>0.5.1rc1 - 0.5.3.0<br>0.6.0rc1 - 0.6.0rc3 || 0.5.0.5<br>0.5.3.1<br>0.5.4<br>0.6.0rc4
|}

=== References ===
* [https://bitcointalk.org/index.php?topic=69120.0 Announcement]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2012-1910 US-CERT/NIST]
* [http://gavintech.blogspot.com/2012/03/full-disclosure-bitcoin-qt-on-windows.html Full disclosure]

== BIP-0016 ==

 <b>Date:</b> 2012-04-01
 <b>Summary:</b> Mandatory P2SH protocol update
 <b>Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.4<br>0.5.0rc1 - 0.5.0.5<br>0.5.1rc1 - 0.5.3<br>0.6.0rc1 || 0.4.5<br>0.5.0.6<br>0.5.4rc1<br>0.6.0rc2
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [[BIP 0016]]

== CVE-2012-2459 ==

 <b>Date:</b> 2012-05-14
 <b>Summary:</b> Block hash collision (via merkle tree)
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.6rc1<br>0.5.0rc1 - 0.5.5rc1<br>0.6.0rc1 - 0.6.0.7rc1<br>0.6.1rc1 - 0.6.1rc1 || 0.4.6<br>0.5.5<br>0.6.0.7<br>0.6.1rc2
|}

Block hash collisions can easily be made by duplicating transactions in the merkle tree.
Such a collision is invalid, but if recorded (as Bitcoin-Qt and bitcoind prior to 0.6.1 did) would prevent acceptance of the legitimate block with the same hash.
This could be used to fork the blockchain, including deep double-spend attacks.

=== References ===
* [https://bitcointalk.org/?topic=81749 Announcement]
* [https://bugs.gentoo.org/show_bug.cgi?id=415973 Gentoo bug tracker]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2012-2459 US-CERT/NIST]
* [https://bitcointalk.org/?topic=102395 Full Disclosure]

== CVE-2012-3789 ==
{{main|CVE-2012-3789}}
 <b>Date:</b> 2012-06-20
 <b>Summary:</b> (Lack of) orphan txn resource limits
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.7rc2<br>0.5.0rc1 - 0.5.6rc2<br>0.6.0rc1 - 0.6.0.8rc2<br>0.6.1rc1 - 0.6.2.2 || 0.4.7rc3<br>0.5.6rc3<br>0.6.0.9rc1<br>0.6.3rc1
|}

=== References ===
* [[CVE-2012-3789]]
* [https://bitcointalk.org/?topic=88734 0.6.3rc1 Announcement]
* [http://web.nvd.nist.gov/view/vuln/detail?vulnId=CVE-2012-3789 US-CERT/NIST]

== CVE-2012-4682 ==

 <b>Date:</b> 
 <b>Summary:</b> 
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.7rc2<br>0.5.0rc1 - 0.5.6rc2<br>0.6.0rc1 - 0.6.0.8rc2<br>0.6.1rc1 - 0.6.2.2 || 0.4.7rc3<br>0.5.6rc3<br>0.6.0.9rc1<br>0.6.3rc1
|}

=== References ===
* [[CVE-2012-4682]]
* [https://bugs.gentoo.org/show_bug.cgi?id=435216 Gentoo bug]

== CVE-2012-4683 ==
{{main|CVE-2012-4683}}
 <b>Date:</b> 2012-08-23
 <b>Summary:</b> Targeted DoS by CPU exhaustion using alerts
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.7rc2<br>0.5.0rc1 - 0.5.6rc2<br>0.6.0rc1 - 0.6.0.8rc2<br>0.6.1rc1 - 0.6.2.2 || 0.7.0 
|}

=== References ===
* [[CVE-2012-4683]]
* [https://bitcointalk.org/index.php?topic=148038.0 Announcement]
* [https://bugs.gentoo.org/show_bug.cgi?id=435216 Gentoo bug]

== CVE-2012-4684 ==
{{main|CVE-2012-4684}}
 <b>Date:</b> 2012-08-24
 <b>Summary:</b> Network-wide DoS using malleable signatures in alerts
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.7rc2<br>0.5.0rc1 - 0.5.6rc2<br>0.6.0rc1 - 0.6.0.8rc2<br>0.6.1rc1 - 0.6.2.2 - 0.6.3rc1 || 0.7.0 
|}

=== References ===
* [[CVE-2012-4684]]
* [https://bitcointalk.org/index.php?topic=148109.0 Announcement]

== CVE-2013-2272 ==

 <b>Date:</b> 2013-01-11
 <b>Summary:</b> Remote discovery of node's wallet addresses
 <b>Fix Deployment:</b> 99.99%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.8rc4<br>0.5.0rc1 - 0.5.7<br>0.6.0rc1 - 0.6.0.10rc4<br>0.6.1rc1 - 0.6.4rc4<br>0.7.0rc1 - 0.7.2 || 0.4.9rc1<br>0.5.8rc1<br>0.6.0.11rc1<br>0.6.5rc1<br>0.7.3rc1
|}

=== References ===

* [https://bitcointalk.org/?topic=135856 Announcement]
* [https://bugs.gentoo.org/show_bug.cgi?id=462046 Gentoo bug]

== CVE-2013-2273 ==

 <b>Date:</b> 2013-01-30
 <b>Summary:</b> Predictable change output
 <b>Fix Deployment:</b> 99.99%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.8rc4<br>0.5.0rc1 - 0.5.7<br>0.6.0rc1 - 0.6.0.10rc4<br>0.6.1rc1 - 0.6.4rc4<br>0.7.0rc1 - 0.7.2 || 0.4.9rc1<br>0.5.8rc1<br>0.6.0.11rc1<br>0.6.5rc1<br>0.7.3rc1
|}

=== References ===

* [https://bugs.gentoo.org/show_bug.cgi?id=462046 Gentoo bug]

== CVE-2013-2292 ==

 <b>Date:</b> 2013-01-30
 <b>Summary:</b> A transaction that takes at least 3 minutes to verify
 <b>Fix Deployment:</b> 0%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || All versions || No fix yet
|}

=== References ===
* [[CVE-2013-2292]]
* [https://bitcointalk.org/?topic=140078 Announcement]
* [https://bugs.gentoo.org/show_bug.cgi?id=462046 Gentoo bug]

== CVE-2013-2293 ==
{{main|CVE-2013-2293}}
 <b>Date:</b> 2013-02-14
 <b>Summary:</b> Continuous hard disk seek
 <b>Fix Deployment:</b> 99.99%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.7.3rc1 || No fix yet (0.8.0 unaffected)
|}

=== References ===

* [[CVE-2013-2293]]
* [https://bitcointalk.org/?topic=144122 Announcement]
* [https://bugs.gentoo.org/show_bug.cgi?id=462046 Gentoo bug]

== CVE-2013-3219 ==

 <b>Date:</b> 2013-03-11
 <b>Summary:</b> Unenforced block protocol rule
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || 0.8.0rc1 - 0.8.0 || 0.8.1
|}

=== References ===
* [[BIP 0050|BIP 50]]

== CVE-2013-3220 ==

 <b>Date:</b> 2013-03-11
 <b>Summary:</b> Inconsistent BDB lock limit interactions
 <b>Fix Deployment:</b> 99.99%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.9rc1<br>0.5.0rc1 - 0.5.8rc1<br>0.6.0rc1 - 0.6.5rc1<br>0.7.0rc1 - 0.7.3rc1 || 0.4.9rc2<br>0.5.8rc2<br>0.6.5rc2<br>0.7.3rc2
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [[BIP 0050|BIP 50]]

== BIP-0034 ==

 <b>Date:</b> 2013-03-25
 <b>Summary:</b> Mandatory block protocol update
 <b>Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.7<br>0.5.0rc1 - 0.5.7<br>0.6.0rc1 - 0.6.0.9<br>0.6.1rc1 - 0.6.3 || 0.4.8rc1<br>0.5.7rc1<br>0.6.0.10rc1<br>0.6.4rc1
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [[BIP 0034]]

== BIP-0050 ==

 <b>Date:</b> 2013-05-15
 <b>Summary:</b> Hard fork to remove txid limit protocol rule
 <b>Deployment:</b> 99.99%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.9rc1<br>0.5.0rc1 - 0.5.8rc1<br>0.6.0rc1 - 0.6.5rc1<br>0.7.0rc1 - 0.7.3rc1 || 0.4.9rc2<br>0.5.8rc2<br>0.6.5rc2<br>0.7.3rc2
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [[BIP 0050]]

== CVE-2013-4627 ==

 <b>Date:</b> 2013-06-??
 <b>Summary:</b> Memory exhaustion with excess tx message data
 <b>Fix Deployment:</b> 99.9%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.9rc3<br>0.5.0rc1 - 0.5.8rc3<br>0.6.0rc1 - 0.6.5rc3<br>0.7.0rc1 - 0.7.3rc3<br>0.8.0rc1 - 0.8.3 || 0.4.9rc4<br>0.5.8rc4<br>0.6.5rc4<br>0.7.3rc4<br>0.8.4
|-
| wxBitcoin || ALL || NONE
|}

=== References ===

== CVE-2013-4165 ==

 <b>Date:</b> 2013-07-20
 <b>Summary:</b> Timing leak in RPC authentication
 <b>Fix Deployment:</b> 99.9%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || * - 0.4.9rc3<br>0.5.0rc1 - 0.5.8rc3<br>0.6.0rc1 - 0.6.5rc3<br>0.7.0rc1 - 0.7.3rc3<br>0.8.0rc1 - 0.8.3 || 0.4.9rc4<br>0.5.8rc4<br>0.6.5rc4<br>0.7.3rc4<br>0.8.4rc1
|-
| wxBitcoin || ALL || NONE
|}

=== References ===
* [https://bitcointalk.org/index.php?topic=287351 Bitcoin-Qt 0.8.4 release notes]
* [https://github.com/bitcoin/bitcoin/issues/2838 The initial bug report]

== CVE-2013-5700 ==

 <b>Date:</b> 2013-09-04
 <b>Summary:</b> Remote p2p crash via bloom filters
 <b>Fix Deployment:</b> 99.9%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || 0.8.0rc1 - 0.8.3 || 0.8.4rc1
|}

=== References ===
* [https://bitcointalk.org/index.php?topic=287351 Bitcoin-Qt 0.8.4 release notes]
* [https://github.com/bitcoin/bitcoin/commit/37c6389c5a0ca63ae3573440ecdfe95d28ad8f07 The fix]
* [https://github.com/bitcoin/bitcoin/pull/18515 An added test]

== CVE-2016-8889 ==

 <b>Date:</b> 2016-10-27
 <b>Summary:</b> Debug console history storing sensitive info
 <b>Fix Deployment:</b> 100%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin Knots GUI || 0.11.0 - 0.13.0 || 0.13.1
|}

=== References ===
* [https://github.com/bitcoinknots/bitcoin/blob/v0.13.1.knots20161027/doc/release-notes.md Bitcoin Knots 0.16.1.knots20161027 release notes]
* [https://nvd.nist.gov/vuln/detail/CVE-2016-8889 US-CERT/NIST]

== CVE-2017-12842 ==

 <b>Date:</b> 2018-06-09
 <b>Summary:</b> No commitment to block merkle tree depth

=== References ===
* [https://bitslog.wordpress.com/2018/06/09/leaf-node-weakness-in-bitcoin-merkle-tree-design/ Explanation by Sergio Demian Lerner]
* [https://lists.linuxfoundation.org/pipermail/bitcoin-dev/2019-February/016697.html Further elaboration by Suhas Daftuar]

== CVE-2017-18350 ==

 <b>Date:</b> 2019-06-22
 <b>Summary:</b> Buffer overflow from SOCKS proxy
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || 0.7.0rc1 - 0.15.0 || 0.15.1rc1
|}

=== References ===
* [https://medium.com/@lukedashjr/cve-2017-18350-disclosure-fe6d695f45d5 Disclosure of details]

== CVE-2018-17144 ==

 <b>Date:</b> 2018-09-17
 <b>Summary:</b> Missing check for duplicate inputs
 <b>Fix Deployment:</b> 31%
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || 0.14.0rc1 - 0.14.2<br>0.15.0rc1 - 0.15.1<br>0.16.0rc1 - 0.16.2 || 0.14.3<br>0.15.2<br>0.16.3
|}

=== References ===
* [https://bitcoincore.org/en/2018/09/20/notice/ Full disclosure by Bitcoin Core]
* [https://bitcoincore.org/en/2018/09/18/release-0.16.3/ Bitcoin Core 0.16.3 release notes]
* [https://github.com/bitcoinknots/bitcoin/blob/v0.16.3.knots20180918/doc/release-notes.md Bitcoin Knots 0.16.3.knots20180918 release notes]
* [https://nvd.nist.gov/vuln/detail/CVE-2018-17144 US-CERT/NIST]
* [https://bugs.gentoo.org/show_bug.cgi?id=666669 Gentoo bug]

== CVE-2018-20586 ==

 <b>Date:</b> 2019-06-22
 <b>Summary:</b> Debug log injection via unauthenticated RPC
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin-Qt<br>bitcoind || 0.12.0rc1 - 0.17.0 || 0.17.1rc1
|}

== CVE-2020-14199 ==

 <b>Date:</b> 2020-06-03
 <b>Summary:</b> Double-signing can enable unintended fees
{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Trezor One ||  || 1.9.1
|-
| Trezor Model T ||  || 2.3.1
|-
| ???
|}

=== References ===
* [https://blog.trezor.io/details-of-firmware-updates-for-trezor-one-version-1-9-1-and-trezor-model-t-version-2-3-1-1eba8f60f2dd Disclosure of details by Trezor team]

== CVE-2020-26895 ==

 <b>Date:</b> 2020-10-08
 <b>Summary:</b> Missing low-S normalization for HTLC signatures.

{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| lnd ||  || 0.10.0
|}

=== References ===
* [https://lists.linuxfoundation.org/pipermail/lightning-dev/2020-October/002858.html CVE-2020-26895: LND Low-S Tx-Relay Standardness]
* [https://lists.linuxfoundation.org/pipermail/lightning-dev/2020-October/002856.html Full Disclosure: Full Disclosure: CVE-2020-26895 LND "Hodl my Shitsig"]

== CVE-2020-26896 ==

 <b>Date:</b> 2020-10-08
 <b>Summary:</b> Invoice preimage extraction via forwarded HTLC.

{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| lnd ||  || 0.11.0
|}

=== References ===
* [https://lists.linuxfoundation.org/pipermail/lightning-dev/2020-October/002857.html CVE-2020-26896: LND Invoice Preimage Extraction]
* [https://lists.linuxfoundation.org/pipermail/lightning-dev/2020-October/002855.html Full Disclosure: CVE-2020-26896 LND "The (un)covert channel"]

== CVE-2021-3401 ==

 <b>Date:</b> 2021-02-01
 <b>Summary:</b> Qt5 remote execution

{| class='wikitable'
!colspan='2'| Affected !! Fix
|-
| Bitcoin Core GUI ||  || 0.19.0
|-
| Bitcoin Knots GUI ||  || 0.18.1
|}

== CVE-2021-31876 ==

 <b>Date:</b> 2021-05-06

=== References ===

* [https://lists.linuxfoundation.org/pipermail/bitcoin-dev/2021-May/018893.html Full Disclosure: CVE-2021-31876 Defect in Bitcoin Core's bip125 logic]

=== References ===
* [https://achow101.com/2021/02/0.18-uri-vuln URI Argument Injection Vulnerability in Bitcoin Core 0.18 and Earlier]

==Definitions==

A critical vulnerability is one that will have disastrous consequences if it is exploited.  A serious vulnerability is one that will have serious consequences if it is exploited<ref>[http://bitcointalk.org/index.php?topic=88892.0 http://bitcointalk.org/index.php?topic=88892.0]</ref>.

==See Also==

* [[Changelog]]
* https://blog.bitmex.com/bitcoins-consensus-forks/

==References==
<references />

[[Category:Security]]

{{Bitcoin Core documentation}}
