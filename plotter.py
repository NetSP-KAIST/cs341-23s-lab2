import matplotlib.pyplot as plt


from scapy.all import *
from enum import Enum


class Identity(Enum):
    INIT = -1
    SERVER = 0
    CLIENT = 1


def calc_estimated_cwnd(pcap_path):
    timestamp = []  # (X) sec
    esti_cwnd = []  # (Y) throughput: # of packets / sec

    identity = Identity.INIT
    packet_num = 0
    time_init = -1
    for packet in PcapReader(pcap_path):
        try:
            if identity == Identity.INIT and packet[IP].src == "10.0.0.2":
                packet_num = 0
                identity = Identity.CLIENT
                time_init = packet.time
            elif identity == Identity.CLIENT and packet[IP].src == "10.0.0.1":
                packet_num += 1
                identity = Identity.SERVER
            elif identity == Identity.SERVER and packet[IP].src == "10.0.0.1":
                packet_num += 1
            elif identity == Identity.SERVER and packet[IP].src == "10.0.0.2":
                timestamp.append(packet.time-time_init)
                esti_cwnd.append(packet_num)

                packet_num = 0
                identity = Identity.CLIENT
        except:
            pass
    print (timestamp)
    print (esti_cwnd)
    return timestamp, esti_cwnd


def plot(timestamp, esti_cwnd):
    plt.plot(timestamp, esti_cwnd, marker='o')
    plt.xlabel('Time (sec)')
    plt.ylabel('# of packets / sec')

    plt.show()


if __name__ == "__main__":
    pcap_path = "naver.pcap"
    timestamp, esti_cwnd = calc_estimated_cwnd(pcap_path)
    plot(timestamp, esti_cwnd)